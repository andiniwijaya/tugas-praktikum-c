#include <stdio.h>
#include <unistd.h>

int main() {
    int ntu_levels[] = {6, 8, 12, 18, 24, 30, 36, 42, 49};
    int kecepatan_motor[] = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    int waktu_cuci[] = {60, 60, 60, 60, 60, 60, 60, 60, 60};
    int ntu, i;

    printf("Masukkan level kekeruhan air (NTU): ");
    scanf("%d", &ntu);
    
    int selected_level = -1;
    for (i = 0; i < sizeof(ntu_levels) / sizeof(ntu_levels[0]); ++i) {
        if (ntu <= ntu_levels[i]) {
            selected_level = i;
            break;
        }
    }
    
    if (selected_level != -1) {
        printf("Mesin cuci akan mencuci pada level kekeruhan air %d (NTU).\n", ntu_levels[selected_level]);
        printf("Tombol start ditekan, membuka klep pengisian air sampai penuh.\n");
        sleep(2 * 60); // Jeda 2 menit (untuk mengisi air)
        printf("Sensor turbidimeter aktif hanya satu kali untuk mendeteksi level kekeruhan air.\n");
        printf("Motor listrik utama berputar sesuai level kekeruhan air = %d \n", ntu_levels[selected_level]);
        printf("Motor listrik utama berhenti pada setiap pertengahan waktu.\n");
        printf("Membuka klep pembuangan air kotor...\n");
        sleep(2 * 60); // Jeda 2 menit (untuk membuka klep pembuangan air)
        printf("Motor listrik utama berputar dengan kecepatan %d rpm.\n", kecepatan_motor[selected_level]);
        sleep(3 * 60); // Jeda 3 menit (untuk mengeringkan cucian)
        printf("Membuka klep pengisian air.\n");
        sleep(2 * 60); // Jeda 2 menit (untuk mengisi air)
        printf("Motor listrik utama berputar selama sisa waktu mencuci");
        printf("Membuka klep pembuangan air kotor...\n");
        sleep(2 * 60); // Jeda 2 menit (untuk membuka klep pembuangan air)
        printf("Motor listrik utama berputar dengan kecepatan %d rpm.\n", kecepatan_motor[selected_level]);
        sleep(3 * 60); // Jeda 3 menit (untuk mengeringkan cucian)
        printf("Cucian telah selesai dan kering.\n");
    } else {
        printf("Tidak ada level kekeruhan air yang sesuai. Mesin cuci tidak dapat diaktifkan.\n");
    }
    
    return 0;
}
