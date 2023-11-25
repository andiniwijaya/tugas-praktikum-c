#include <stdio.h>

main()
{
	double saldo = 1000000; // saldo awal
	double bunga = 2./100; // bunga per bulan 2%
	int jumlahBulan = 10;
	
	// Menghitung jumlah uang setiap bulan
	for(int bulan = 1; bulan <= 10; bulan++) {
		// Hitung bunga bulan ini
		double bungaBulanini = bunga * saldo;
		
		saldo += bungaBulanini;
	}
	
	printf("Saldo setelah %d bulan : %.2f", jumlahBulan, saldo);
	
	return 0;
}
