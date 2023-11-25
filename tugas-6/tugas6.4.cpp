#include <stdio.h>

main()
{
	int kecepatan = 2;
	int waktu = 100;
	int jarak;
	
	printf("Mengendarai sepeda dengan kecepatan tetap 2 meter/detik. Maka :");
	
	jarak = kecepatan * waktu;
	
	printf("\nJarak yang ditempuh setelah %d detik adalah %i meter", waktu, jarak);
	
	return 0;
}
