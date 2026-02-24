#include <stdio.h>
#include <string.h>

int main() {
    char kode[10];
    int porsi;
    int totalBayar = 0;

    printf("Menu\t\tPorsi\tHarga\tTotal\n");
    printf("==============================================\n");

    while (1) {
        scanf("%s", kode);

        if (strcmp(kode, "END") == 0) {
            break;
        }

        scanf("%d", &porsi);

        char menu[50];
        int harga = 0;

        if (strcmp(kode, "NGS") == 0) {
            strcpy(menu, "Nasi Padang");
            harga = 25000;
        } else if (strcmp(kode, "AP") == 0) {
            strcpy(menu, "Rendang");
            harga = 30000;
        } else if (strcmp(kode, "GG") == 0) {
            strcpy(menu, "Ayam Goreng");
            harga = 22000;
        }

        int total = harga * porsi;
        totalBayar += total;

        printf("%-15s %d\t%d\t%d\n", menu, porsi, harga, total);
    }

    printf("==============================================\n");
    printf("Total Pembayaran\t\t\t%d\n", totalBayar);

    return 0;
}