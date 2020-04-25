#include <stdio.h>
#define SIZE 3000
#define NUMBER 1000
int n[NUMBER+1][SIZE]={0};
int main()
{
	int input;
	int i, j;
	n[0][0] = 1;
	n[1][0] = 1;
	for (i = 2; i <= NUMBER; i++) {
		for (j = 0; j < SIZE; j++) {
			n[i][j] = n[i-1][j] * i;
		}
		for (j = 0; j < SIZE; j++) {
			if (n[i][j] >= 10) {
				n[i][j+1] += n[i][j] / 10;
				n[i][j] = n[i][j] % 10;
			}
		}
	}
	
	while (scanf("%d", &input) != EOF)
	{
		printf("%d!\n", input);
		for (i = SIZE-1; i > 0; i--) {
			if (n[input][i] != 0) break;
		}
		for(; i >= 0; i--) {
			printf("%d", n[input][i]);
		}
		printf("\n");
	}
	return 0;
}