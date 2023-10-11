#include <stdio.h>
#include <math.h>

//Konversi Suhu

int main()
{
	float c, f, r;
	
	printf("Input suhu dalam satuan celcius : ");
	scanf("%f", &c);
	
	f = (c * 9./5.) + 32;
	r = c * 4./5.;
	
	printf("NILAI SUHU");
	printf("\nFahrenheit = %.2f", f);
	printf("\nReamur = %.2f", r);
	
	return 0;
}
