#include <stdio.h>

//Flowchart dan Input bilangan 30, 50 dan 65

int main()
{
	int N;
	printf("Input N : ");
	scanf("%i", &N);
	
	if (N > 50) {
		N = N - 25;
	} else {
		N = N + 10;
	}
	
	printf("\n%i", N);
	printf("\n\nProgram selesai.");
	
	return 0;
}
