#include <stdio.h>

//Ganjil-Genap

main()
{
	int bil;
	
	printf("Input bilangan bulat positif : ");
	scanf("%i", &bil);
	
	if (bil%2==0) {
		printf("\nGENAP", bil);
	} else {
		printf("\nGANJIL", bil);
	}
	printf("\n\nProgram selesai.");
	return 0;
}
