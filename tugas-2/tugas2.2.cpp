#include <stdio.h>

//Volume Bangun Ruang Bola

int main()
{
	double diameter = 15; // Diameter bola dalam cm
	double radius = diameter / 2; // Menghitung jari-jari bola
	double pi = 3.14; // Nilai pi
	
	// Menghitung volume bola menggunakan rumus V = (4/3) * pi * r^3
	double volume = (4.0 / 3.0) * 3.14 * radius * radius * radius;
	
	printf("VOLUME BANGUN RUANG BOLA");
	printf("\nJari-jari = %.2f cm", radius);
	printf("\nVOLUME = %.2f cm^3", volume);
	
	return 0;
}
