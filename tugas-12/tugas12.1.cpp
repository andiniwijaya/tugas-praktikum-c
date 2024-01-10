#include <stdio.h>

int main() {
	char A[8] = {'J', 'A', 'K', 'A', 'R', 'T', 'A', '\0'};
	int flag = 0;
	int i,j;
	
	// Cetak isi array A
	printf("Isi Array A : ");
	for (i = 0; i < 7; i++) {
		printf("%3c", A[i]);
	}

	// Memeriksa huruf yang sama dalam array A
	for (i = 0; i < 7; i++) {
		for (j = i + 1; j < 8; j++) {
			if (A[i] == A[j]) {
				flag = 1;
				printf("\nADA\nHuruf yang sama: %c\n", A[i]);
				break;
			}
		}
		if (flag == 1) {
			break;
		}
	}

	if (flag == 0) {
		printf("TIDAK ADA\n");
	}

	return 0;
}

