#include <stdio.h>

main() {
	int data[14] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35, 28, 14, 11};
	int A[11] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35};
	int i;

	printf("a. Isi array A : ");
	for(i=0; i<11; i++) {
		printf("%4i", A[i]);
	}

	printf("\nb. Isi array A : ");
	for(i=0; i<11; i++) {
		if (A[i]>9)
			printf("%4i", A[i]);
	}

	printf("\nc. Isi array A : ");
	for(i=0; i<14; i++) {
		if (data[i]>9)
			printf("%4i", data[i]);
	}

	printf("\nd. Isi array A : ");
	for(i=0; i<14; i++) {
		if (data[i] % 2 == 1)
			printf("%4i", data[i]);
	}

	printf("\ne. Isi array A : ");
	for(i=0; i<11; i++) {
		if (A[i] % 2 == 1)
			printf("%4i", A[i]);
	}

	return 0;

}