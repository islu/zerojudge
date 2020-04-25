#include <stdio.h>
#define MOD 2

int main()
{
	int N;
	while (scanf("%d", &N) != EOF)
	{
		int count = 0;	
		if (N == 0) break;
		do {
			if (N % MOD == 1) count++;
			else break;
			N /= MOD;
		} while (N != 0);
		
		printf("%d\n", count);
	}
	return 0;
}