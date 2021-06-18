#include <stdio.h>

int main()
{
	long long N;
	while (scanf("%lld", &N) != EOF)
	{
		if (N < 0) break;
		printf("%lld\n", 1+(N*(N+1))/2);
	}
	return 0;
}