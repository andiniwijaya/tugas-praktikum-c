#include <stdio.h>

main()
{
	int masuk, keluar, lama_bekerja;
	
	printf("Menentukan Lama Bekerja Seorang Karyawan\n");
	printf("\nJam Masuk : "); scanf("%i", &masuk);
	printf("Jam Keluar : "); scanf("%i", &keluar);
	
	if (keluar >= masuk) {
		lama_bekerja = keluar - masuk;
	}
	else {
		lama_bekerja = (12 - masuk) + keluar;
	}
	
	printf("\nLama Bekerja adalah %i Jam", lama_bekerja);
	
	return 0;
}
