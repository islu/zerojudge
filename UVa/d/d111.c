#include <stdio.h>
#include <math.h>

int main()
{
	long long n;
	while (scanf("%lld", &n) !=EOF && n != 0) 
	{
		if ((long long)(sqrt((double)n)) * (long long)(sqrt((double)n)) == n)
			printf("yes\n");
		else
			printf("no\n");
	}
	return 0;
}