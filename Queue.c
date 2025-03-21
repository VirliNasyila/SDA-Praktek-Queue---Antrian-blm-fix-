#include "queue.h"

void CreateQueue(Queue *Q) {
    createList(&Q->list);
}

boolean is_Empty(Queue Q) {
    return (Q.list.head == NULL);
}

boolean is_Full(Queue Q) {
    return false;  // Karena menggunakan linked list, queue tidak pernah penuh
}

void EnQueue(Queue *Q, int X) {
    insertLast(&Q->list, X);
}

void deQueue(Queue *Q, int *X) {
    if (!is_Empty(*Q)) {
        *X = Q->list.head->info;  // Ambil nilai antrian yang akan diproses
        deleteFirst(&Q->list);    // Hapus elemen pertama dari antrian
    }
}

void printQueue(Queue Q) {
    printList(Q.list);
    printf("\n");  
}


