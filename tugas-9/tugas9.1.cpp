#include <stdio.h>

main()
{
	int A[11] = {12, 17, 10, 5, 15, 25, 11, 7, 25, 16, 19};
	int i, N, flag; // flag untuk menandai ADA atau TIDAK ADA, 0 = tidak ada, 1 = ada
	
	printf("Masukkan bilangan integer : ");
	scanf("%i", &N);
	
	// cetak isi array
	for (int i=0; i<11; i++) {
		printf("%3i", A[i]);
	}
	
	// lakukan pencarian
	flag = 0;
	i = 0;
	while(i<=10) {
		if (A[i] == N) {
			flag = 1;
		}
		i++;
	}

	if (flag == 1) {
		for (i=0; i<11; i++) {
			if (A[i] == N) {
				printf("\nADA\nLokasi bilangan yang sama : %3i", i);
			}
		}
	} else {
		printf("\nTIDAK ADA\n");
	}
	
	return 0;
}
