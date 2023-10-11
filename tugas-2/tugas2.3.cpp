#include <stdio.h>
#include <math.h>

//Sisi Miring Segitiga Siku-Siku

int main()
{
	int a, b;
	a = 4; // sisi alas dalam cm
	b = 5; // sisi tinggi dalam cm
	
	// Menghitung sisi miring menggunakan rumus c^2 = a^2 + b^2
	float c = sqrt((a*a) + (b*b));
	
	printf("SISI MIRING SEGITIGA SIKU-SIKU");
	printf("\nAlas \t = %d cm", a);
	printf("\nTinggi \t = %d cm", b);
	printf("\nMIRING \t = %.2f cm", c);
	
	return 0;
}
