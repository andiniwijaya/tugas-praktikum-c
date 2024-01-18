#include <stdio.h>
#include <unistd.h>

// Array untuk menyimpan level kekeruhan air
int kekeruhanAir[] = {6, 8, 12, 18, 24, 30, 36, 42, 49};

// Fungsi untuk mendapatkan kecepatan motor berdasarkan level kekeruhan air
int getKecepatanMotor(int level) {
    if (level == 0) {
        return 1000; // Kecepatan rata-rata kekeruhan air
    } else {
        return 1000 + level * 100; // Contoh formula fuzzy, sesuaikan dengan kebutuhan
    }
}

// Fungsi untuk mencuci berdasarkan level kekeruhan air
void cuci(int level) {
    int kecepatanMotor = getKecepatanMotor(level);

    // Proses pencucian
    printf("Tombol start ditekan.\n");
    printf("Motor listrik pembuka klep pengisian air aktif selama 2 menit sampai air penuh.\n");
    sleep(2 * 5);
    printf("Sensor turbidimeter aktif hanya satu kali untuk mendeteksi level kekeruhan air.\n");
    
    // Motor listrik utama berputar sesuai level kekeruhan air
    printf("Motor listrik utama berputar dengan kecepatan %d rpm.\n", kecepatanMotor);
    
    // Motor listrik utama berhenti pada setiap pertengahan waktu
    printf("Motor listrik utama berhenti selama pertengahan waktu.\n");
    sleep(2 * 5);
    
    // Motor listrik pembuka klep pembuangan air kotor aktif selama 2 menit sampai air kotor habis
    printf("Motor listrik pembuka klep pembuangan air kotor aktif selama 2 menit sampai air kotor habis.\n");
    sleep(2 * 5);
    
    // Motor listrik utama berputar dengan kecepatan 2000 rpm untuk mengeringkan cucian selama 3 menit
    printf("Motor listrik utama berputar dengan kecepatan 2000 rpm untuk mengeringkan cucian selama 3 menit.\n");
    sleep(3 * 5);
    
    // Motor listrik pembuka klep pengisian air aktif selama 2 menit sampai air penuh
    printf("Motor listrik pembuka klep pengisian air aktif selama 2 menit sampai air penuh.\n");
    sleep(2 * 5);
    
    // Motor listrik utama berputar selama sisa waktu mencuci
    printf("Motor listrik utama berputar selama sisa waktu mencuci.\n");
    
    // Motor listrik pembuka klep pembuangan air kotor aktif selama 2 menit sampai air habis
    printf("Motor listrik pembuka klep pembuangan air kotor aktif selama 2 menit sampai air habis.\n");
    sleep(2 * 5);
    
    // Motor listrik utama berputar dengan kecepatan 2000 rpm untuk mengeringkan cucian selama 3 menit
    printf("Motor listrik utama berputar dengan kecepatan 2000 rpm untuk mengeringkan cucian selama 3 menit.\n");
    sleep(3 * 5);
    
    printf("Proses pencucian selesai.");
}

int main() {
    // Simulasi mesin cuci dengan level kekeruhan air tertentu (contoh: level 6)
    int levelKekeruhan = 6;
    cuci(kekeruhanAir[levelKekeruhan]);

    return 0;
}
