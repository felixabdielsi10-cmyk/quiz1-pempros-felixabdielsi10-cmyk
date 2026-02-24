#include <stdio.h>

int main() {
    int N, kodeKelompok;
    
    // 1. Input Jumlah Data
    printf("Masukkan jumlah data (N): ");
    scanf("%d", &N);
    
    int nilai[N]; // Rak untuk menyimpan semua nilai
    
    // 2. Input Deret Nilai
    printf("Masukkan %d nilai: ", N);
    for(int i = 0; i < N; i++) {
        scanf("%d", &nilai[i]);
    }
    
    // 3. Input Kode Kelompok
    printf("Masukkan kode kelompok (0/1/2/3): ");
    scanf("%d", &kodeKelompok);
    
    // 
    
    // 4. Proses Penjumlahan (Filtering)
    int total = 0;
    for(int i = 0; i < N; i++) {
        // Logika penyaringan: apakah posisi data ini masuk ke kode kelompok?
        // Contoh: menggunakan modulo untuk memisahkan kelompok
        if (i % 4 == kodeKelompok) {
            total += nilai[i];
        }
    }
    
    // 5. Output Hasil
    printf("Total nilai untuk kelompok %d adalah: %d\n", kodeKelompok, total);
    
    return 0;
}