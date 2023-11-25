#include <stdio.h>

main()
{
	int nilai[10];
	int i;
	
	// Input nilai mahasiswa
	printf("Masukkan Nilai Mahasiswa\n");
	for(i=0; i<10; i++) {
		printf("Nilai Mahasiswa %i :", i + 1);
		scanf("%i", &nilai[i]);
	}
	
	// Daftar nilai mahasiswa yang lulus
	printf("\nDaftar Nilai Mahasiswa yang lulus :");
	for(i=0; i<10; i++) {
		if(nilai[i] >= 60) {
			printf("\nNilai mahasiswa %i : %i", i + 1, nilai[i]);
		}
	}
	
	return 0;
}
