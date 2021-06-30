#include "stdio.h"
#define RANGE 65535

int main()
{
	short prime[RANGE] = {0};
	int i, j;
	for(i=0;i<RANGE;i++)
	{
		prime[i] = 1;
	}
	prime[0] = 0;
	prime[1] = 0;
	for(i=2;i<RANGE;i++)
	{
		if(prime[i] == 1)
		{
			for(j=i+i;j<RANGE;j+=i)
			{
				prime[j] = 0;
			}
		}
	}
	int n, number;
	while(scanf("%d", &n)!= EOF)
	{
		for(i=0;i<n;i++)
		{
			scanf("%d", &number);
			if(prime[number] == 1) printf("Y\n");
			else printf("N\n");
		}
	}
	return 0;
}
