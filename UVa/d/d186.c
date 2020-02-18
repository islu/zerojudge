#include <stdio.h>

int main()
{
	long long a, b, i;

	while (scanf("%lld%lld", &a, &b) != EOF)
	{
		int count = 0;	
		if (a == 0 && b == 0) break;
		for (i = 1; i*i <= b; i++) {
			if(i*i >= a && i*i <= b) count++;
		}
		
		printf("%d\n", count);
	}
	return 0;
}