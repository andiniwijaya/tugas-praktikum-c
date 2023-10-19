#include <stdio.h>

main()
{
	int masuk, keluar, lama, biaya;
	
	printf("Menentukan Biaya Parkir\n");
	printf("\nJam Masuk : "); scanf("%i", &masuk);
	printf("Jam Keluar : "); scanf("%i", &keluar);
	
	// Menghitung lama parkir
	if (keluar >= masuk) {
		lama = keluar - masuk;
	}
	else {
	lama = (12 - masuk) + keluar;
	}
	
	// Menghitung biaya parkir
	if (lama > 2) {
		biaya = 2000 + (lama -2) * 500;
	}
	else {
		biaya = 2000;
	}
	printf("\nLama Parkir = %i jam", lama);
	printf("\nBiaya Parkir = Rp. %i", biaya);
	
	return 0;
}
