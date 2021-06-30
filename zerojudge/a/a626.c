#include "stdio.h"
#define RANGE 1001

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
			for(j=i*i;j<RANGE;j+=i)
			{
				prime[j] = 0;
			}
		}
	}
	int N;
	while(scanf("%d", &N)== 1)
	{
		int counter = 0;
		for(i=2;i<=N;i++)
		{
			if(prime[i] == 1) 
			{
				printf("%10d", i);
				counter++;
			}
			
			if(counter % 5 == 0) printf("\n");
		}
		if(counter % 5 != 0) printf("\n");
	}
	return 0;
}
