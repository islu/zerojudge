#include <stdio.h>
#define SIZE 30001

int main()
{
	int n;
	int i, j;
	long long g[SIZE], f[SIZE];
	f[1] = 1;
	g[1] = 1;
	for (i = 2; i < SIZE; i++) {
		f[i] = i + f[i-1];
		g[i] = f[i] + g[i-1];
	}
	while (scanf("%d", &n) == 1)
	{
		printf("%lld %lld\n", f[n], g[n]);
	}
	return 0;
}