#include <stdio.h>

int main()
{
	int n, m, c;
	int i;
	int counter = 1;
	while (scanf("%d%d%d", &n, &m, &c) != EOF)
	{
		if (n == 0 && m == 0 && c == 0) break;
		if (counter != 1) printf("\n");
		int max = 0;
		int now = 0;
		int k = 0;
		int curr[21] = {0};
		int sw[21] = {0};
		
		for (i = 1; i <= n; i++)
			scanf("%d", &curr[i]);
		
		for(i = 1; i <= m; i++) {
			scanf("%d", &k);
			if (sw[k] == 1) sw[k] = 0;
			else sw[k] = 1;
			if (sw[k] == 1) now += curr[k];
			else now -= curr[k];
			if (max < now) max = now;
		}
		
		printf("Sequence %d\n", counter);
		counter++;
		if(max > c) printf("Fuse was blown.\n");
		else {
			printf("Fuse was not blown.\n");
			printf("Maximal power consumption was %d amperes.\n", max);
		}
	}
	return 0;
}