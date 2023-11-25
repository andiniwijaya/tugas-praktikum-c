#include <stdio.h>

main()
{
	int A[11];
	int data[] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35};
	int index_a;
	int i;
	
	// Input array A yang bernilai genap dari data
	index_a = 0;
	for(i=0; i<11; i++) {
		if (data[i] % 2 == 0) {
			A[index_a] = data[i];
			index_a++;
		}
	}
	
	// Mencetak isi array A
	printf("Data array A yang disimpan : ");
	for(i=0; i<index_a; i++) {
		printf("%4i", A[i]);
	}
	
	return 0;
}
