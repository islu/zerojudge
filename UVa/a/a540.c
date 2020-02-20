#include <stdio.h>

int main()
{
	int N;
	while (scanf("%d", &N) != EOF && N != 0)
	{
		int g[N];
		int i, j;
		int max = 0;
		int temp = 0;
		for (i = 0; i < N; i++)
			scanf("%d", &g[i]);

		for (i = 0; i < N; i++) {
			temp = g[i];
			for (j = i+1; j < N; j++) {
				if (max < temp) max = temp;
				temp += g[j];
			}
			if (max < temp) max = temp;
		}

		if (max > 0) printf("The maximum winning streak is %d.\n", max);
		else printf("Losing streak.\n");
	}
	return 0;
}
