#include <stdio.h>
int main()
{
	int A[12] = {60, 80, 55, 90, 75, 40, 50, 85, 70, 65, 45, 55};
	int B[12] = {0};
	int C[12] = {0};
	int i;
	int sum = 0, countB = 0, countC = 0;
	float average;
	
	//menghitung rata-rata array A
	for (i=0; i<12; i++) {
		sum += A[i];
	}
	average = sum/12;
	printf("Rata-rata nilai mahasiswa : %.0f\n", average);
	
	//memindahkan nilai array A ke array B atau C berdasarkan rata-rata
	for (i=0; i<12; i++) {
		if (A[i] > average) {
			B[countB++] = A[i];
		} else {
			C[countC++] = A[i];
		}
	}
	
	//cetak isi aaray A
	printf("\nIsi Array A : ");
	for (i=0; i<12; i++) {
		printf("%3i", A[i]);
	}
	
	//cetak isi array B
	printf("\nIsi Array B : ");
	for (i=0; i<countB; i++) {
		printf("%3i", B[i]);
	}
	
	//cetak isi array C
	printf("\nIsi Array C : ");
	for (i=0; i<countC; i++) {
		printf("%3i", C[i]);
	}
	
	return 0;
}
