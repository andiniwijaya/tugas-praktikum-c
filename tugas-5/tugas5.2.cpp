#include <stdio.h>

main()
{
	int kode;
	char jenis;
	float diskon, harga, harga_diskon;
	
	printf("Harga Setelah Diskon\n");
	printf("\nKode : "); scanf("%i", &kode);
	printf("Jenis (A, B, C) : "); scanf("%c", &jenis);
	jenis = getchar();
	printf("Harga : Rp. "); scanf("%f", &harga);
	
	// Menghitung diskon berdasarkan jenis
	switch(jenis) {
		case 'A' :
			diskon = 0.10;
		break;
		case 'B' :
			diskon = 0.15;
		break;
		case 'C' :
			diskon = 0.20;
		break;
		default : diskon = 0.0;
	}
	
	// Menghitung harga setelah di diskon
	harga_diskon = harga - (harga * diskon);
	
	printf("\nJenis barang %c ", jenis);
	printf("mendapat diskon = %.0f%%, ", diskon * 100);
	printf("Harga setelah di diskon = Rp. %.0f", harga_diskon);
	
	return 0;
}
