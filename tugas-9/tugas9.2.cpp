#include <stdio.h>

main()
{
	char A[10] = {'S', 'T', 'T', 'M', 'A', 'N', 'D', 'A', 'L', 'A'};
	char C;
	int i;
	int count = 0; // variabel untuk menghitung berapa kali karakter C muncul
	int found = 1;
	
	printf("Masukkan karakter : ");
	scanf("%c", &C);
	
	for (int i=0; i<10; i++) {
		printf("%3c", A[i]);
		if (A[i] == C) {
			found = 1;
			count++;
		}
	}

	if (found) {
		printf("\nADA\nJumlah karakter yang sama : %i", count);
	} else {
		printf("\nTIDAK ADA\n");
	}
	
	return 0;
}
