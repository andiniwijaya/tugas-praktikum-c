#include <stdio.h>
#include <math.h>

//Sisi Miring Segitiga Siku-siku

int main()
{
	int alas, tinggi;
	float miring;
	
	printf("Input alas : ");
	scanf("%i", &alas);
	printf("Input tinggi : ");
	scanf("%i", &tinggi);
	
	miring = sqrt ((alas * alas) + (tinggi * tinggi));
	
	printf("SISI MIRING SEGITIGA SIKU-SIKU");
	printf("\nAlas = %i", alas);
	printf("\nTinggi = %i", tinggi);
	printf("\nSISI MIRING = %.2f", miring);
	
	return 0;
}
