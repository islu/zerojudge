#include <stdio.h>
#define SIZE 100
#define NUMBER 51

int f[NUMBER][SIZE]={0};

int main()
{
	int n;
	int i, j;
	f[0][0] = 1;
	f[1][0] = 1;
	for (i = 2; i < NUMBER; i++) {
		for (j = 0; j < SIZE; j++) {
			f[i][j] += f[i-1][j] + f[i-2][j];
		}
		for (j = 0; j < SIZE; j++) {
			if (f[i][j] >= 10) {
				f[i][j+1] += f[i][j] / 10;
				f[i][j] %= 10;
			}
		}
	}
	
	while (scanf("%d", &n) == 1)
	{
		if(n < 1) break;
		for (i = SIZE-1; i > 0; i--) {
			if(f[n][i] != 0) break;
		}
		for(; i >= 0; i--)
			printf("%d", f[n][i]);
			
		printf("\n");
	}
	return 0;
}