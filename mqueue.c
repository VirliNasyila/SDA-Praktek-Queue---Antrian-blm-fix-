#include "queue.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
    Queue Q;
    int pilihan, nomorAntrian = 0, temp;

    CreateQueue(&Q);

    do {
        printf("\n===========================\n");
        printf("      ANTRIAN      \n");
        printf("===========================\n");
        printf("1. Ambil Antrian\n");
        printf("2. Proses Antrian\n");
        printf("3. Cetak Antrian\n");
        printf("4. Keluar\n");
        printf("===========================\n");
        printf("Pilihan: ");
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1:
                nomorAntrian++;
                printf("Nomor antrian %d diambil.\n", nomorAntrian);
                EnQueue(&Q, nomorAntrian);
                printf("Antrian saat ini: ");
                printQueue(Q);
                break;
            case 2:
                if (is_Empty(Q)) {
                    printf("Antrian kosong!\n");
                } else {
                    deQueue(&Q, &temp);
                    printf("Nomor antrian %d diproses.\n", temp);
                    printf("Antrian saat ini: ");
                    printQueue(Q);
                }
                break;
            case 3:
                printf("Daftar Antrian: ");
                printQueue(Q);
                break;
            case 4:
                printf("Terima kasih telah menggunakan sistem antrian.\n");
                break;
            default:
                printf("Pilihan tidak valid! Silakan coba lagi.\n");
        }
    } while (pilihan != 4);

    return 0;
}
