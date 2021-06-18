#include <stdio.h>
#define SIZE 2000
#define NUMBER 5001

int fibonacci[NUMBER][SIZE] = {0};

int main()
{
	int input;
	int i, j;
	fibonacci[0][0] = 0;
	fibonacci[1][0] = 1;
	for (i = 2; i < NUMBER; i++) {
		for(j = 0; j < SIZE; j++) {
			fibonacci[i][j] += fibonacci[i-1][j] + fibonacci[i-2][j];
		}
		for(j = 0; j < SIZE; j++) {
			if(fibonacci[i][j] >= 10) {
				fibonacci[i][j+1] += fibonacci[i][j] / 10;
				fibonacci[i][j] = fibonacci[i][j] % 10;
			}
		}
	}
	
	while(scanf("%d", &input) != EOF)
	{
		printf("The Fibonacci number for %d is ", input);
		for(i = SIZE-1; i>0; i--) {
			if(fibonacci[input][i] != 0) break;
		}
		for(; i >= 0; i--) {
			printf("%d", fibonacci[input][i]);
		}
		printf("\n");
	}
	return 0;
}