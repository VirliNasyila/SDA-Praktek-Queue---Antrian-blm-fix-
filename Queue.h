#ifndef QUEUE_H
#define QUEUE_H

#include "boolean.h"
#include "linked.h"
#include <stdbool.h>

typedef struct {
    LinkedList list;
} Queue;

void CreateQueue(Queue *Q);
boolean is_Empty(Queue Q);
boolean is_Full(Queue Q);
void EnQueue(Queue *Q, int X);
void deQueue(Queue *Q, int *X);
void printQueue(Queue Q);

#endif
