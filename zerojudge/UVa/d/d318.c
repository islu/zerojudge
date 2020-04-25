#include <stdio.h>
#define MOD 3

int main()
{
	int N;
	int ternary[50];
	int i = -1;
	while (scanf("%d", &N) != EOF)
	{
		if (N < 0) break;
		do {
			i++;
			ternary[i] = N % MOD;
			N = N / MOD;
		} while (N != 0);
		
		for(i; i >= 0; i--)
			printf("%d", ternary[i]);
		printf("\n");
	}
	return 0;
}