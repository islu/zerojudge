// https://kos74185foracm.blogspot.com/2011/06/11310-delivery-debacle.html
// dp
#include <stdio.h>
#define NUM 50

int main()
{
	int i;
	long long dp[NUM];
	dp[1] = 1;
	dp[2] = 5;
	dp[3] = 11;
	for (i = 4; i < NUM; i++) 
		dp[i] = dp[i-1] + 4*dp[i-2] + 2*dp[i-3];
	
	int t;
	while (scanf("%d", &t) != EOF)
	{
		int n;
		for (i = 0; i < t; i++) {
			scanf("%d", &n);
			printf("%lld\n", dp[n]);
		}
	}

	return 0;
}
