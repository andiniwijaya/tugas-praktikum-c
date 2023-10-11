#include <stdio.h>

//Ganjil-Genap

int main()
{
	int bil;
	
	printf("Masukan bilangan : ");
	scanf("%d", &bil);
	
	
	if (bil %2 != 0) {
		printf("\n%d adalah bilangan ganjil \n", bil);
	}
	else {
		printf("\n%d adalah bilangan genap \n", bil);
	}
	
	return 0;
}
