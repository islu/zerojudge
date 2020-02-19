#include <stdio.h>

int main()
{
	int n;
	long long bee[80];
	int i;
	bee[0] = 1;
	bee[1] = 2;
	for (i = 2; i < 80; i++) {
		bee[i] = bee[i-2] + bee[i-1] + 1;
	}
	
	while (scanf("%d", &n) == 1 && n != -1)
	{
		if (n > 0) printf("%lld %lld\n", bee[n-1], bee[n]);
		else printf("0 1\n");
	}
	return 0;
}