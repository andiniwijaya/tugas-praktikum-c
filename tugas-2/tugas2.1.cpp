#include <stdio.h>

//Luas Segitiga

int main()
{
	int alas, tinggi;
	float luas; alas = 8; tinggi = 5;
	
	luas = 0.5 * alas * tinggi;
	
	printf("LUAS SEGITIGA");
	printf("\nAlas = %i cm", alas);
	printf("\nTinggi = %i cm", tinggi);
	printf("\nLUAS = %.2f cm^2", luas);
	
	return 0;
}
