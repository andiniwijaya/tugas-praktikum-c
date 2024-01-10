#include <stdio.h>

int main() {
    char A[11] = {'J', 'O', 'G', 'J', 'A', 'K', 'A', 'R', 'T', 'A', '\0'};
    int count[26] = {0};  // Inisialisasi array count untuk menyimpan jumlah kemunculan setiap huruf

    // Menghitung jumlah kemunculan setiap huruf dalam array A
    for (int i = 0; A[i] != '\0'; ++i) {
        if (A[i] >= 'A' && A[i] <= 'Z') {
            count[A[i] - 'A']++;
        }
    }

    // Mencari huruf dengan jumlah kemunculan terbanyak
    char maxChar;
    int maxCount = 0;

    for (int i = 0; i < 26; ++i) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            maxChar = 'A' + i;
        }
    }

    // Menampilkan hasil
    printf("Array A : ");
    int i2;
    for ( i2 = 0; i2 < 10; i2++) {
        printf("%c ", A[i2]);
    }
    
    printf("\nHuruf terbanyak : %c\n", maxChar);
    printf("Jumlah huruf terbanyak : %d\n", maxCount);

    return 0;
}


