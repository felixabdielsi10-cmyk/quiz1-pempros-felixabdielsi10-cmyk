#include <stdio.h>
#include <string.h>

int main() {
    int N, berat, totalBeratGrup = 0, totalBiayaGrup = 0;
    char asrama[10], target[10], nama[50];
    int hargaPerKg = 7000;

    printf("--- Sistem Laundry IT Del ---\n");
    printf("Jumlah Pesanan: "); scanf("%d", &N);
    printf("Cari Asrama: "); scanf("%s", target);

    // 
    
    // Proses Filter & Akumulasi langsung saat input
    for (int i = 0; i < N; i++) {
        printf("\nData (Nama Berat Asrama): ");
        scanf("%s %d %s", nama, &berat, asrama);

        // Logika Penyaringan (Filter)
        if (strcmp(asrama, target) == 0) {
            totalBeratGrup += berat;
            totalBiayaGrup += (berat * hargaPerKg);
            printf(">> Data %s masuk ke hitungan grup.\n", nama);
        }
    }

    // Output Hasil Akhir
    printf("\n=============================\n");
    printf("LAPORAN ASRAMA: %s\n", target);
    printf("Total Berat: %d kg\n", totalBeratGrup);
    printf("Total Tagihan: Rp %d\n", totalBiayaGrup);
    printf("=============================\n");

    return 0;
}