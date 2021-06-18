#include <stdio.h>

int main()
{
	int T;
	while (scanf("%d", &T) != EOF)
	{
		int i, j;
		int N;
		for (i = 1; i <= T; i++)
		{
			scanf("%d", &N);
			int C[N];
			for (j = 0; j < N; j++) scanf("%d", &C[j]);
			
			int middle = N/2;
			printf("Case %d: %d\n", i, C[middle]);
			
		}
	}
	
	return 0;
}
