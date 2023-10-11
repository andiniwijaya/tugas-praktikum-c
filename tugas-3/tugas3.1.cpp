#include <stdio.h>
#include <math.h>

//Luas dan Keliling Segitiga

int main()
{
	int alas, tinggi, sisiA, sisiB, sisiC;
	float luas, keliling;
	
	printf("Input alas segitiga : "); // alas segitiga dalam cm
	scanf("%i", &alas);
	printf("Input tinggi segitiga : "); // tinggi segitiga dalam cm
	scanf("%i", &tinggi);
	
	printf("Input sisiA : ");
	scanf("%i", &sisiA);
	printf("Input sisiB : ");
	scanf("%i", &sisiB);
	printf("Input sisiC : ");
	scanf("%i", &sisiC);
	
	luas = 0.5 * alas * tinggi;
	keliling = sisiA + sisiB + sisiC;
	
	printf("LUAS dan KELILING SEGITIGA");
	printf("\nAlas = %i", alas);
	printf("\nTinggi = %i", tinggi);
	printf("\nLUAS = %.3f", luas);
	
	printf("\nSisiA = %i", sisiA);
	printf("\nSisiB = %i", sisiB);
	printf("\nSisiC = %i", sisiC);
	printf("\nKELILING = %.2f", keliling);
	
	return 0;
}
