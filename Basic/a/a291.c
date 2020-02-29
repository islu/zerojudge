#include <stdio.h>

int main()
{
	int p[4];
	while (scanf("%d", &p[0]) != EOF)
	{
		int i, j, k, n;
		int g[4];
		for (i = 1; i < 4; i++)
			scanf("%d", &p[i]);

		scanf("%d", &n);
		for (i = 0; i < n; i++) {
			int a = 0, b = 0;
			int c1[4] = {0};
			int c2[4] = {0};
			for (j = 0; j < 4; j++) {
				scanf("%d", &g[j]);
				if (g[j] == p[j]) {
					a++;
					c1[j] = 1;
					c2[j] = 1;
				}
			}
			for (j = 0; j < 4; j++) {
				if (c1[j] == 1) continue;
				for (k = 0; k < 4; k++) {
					if (c2[k] == 1) continue;
					if (g[k] == p[j]) {
						b++;
						c2[k] = 1;
						break;
					}
				}
			}
			printf("%dA%dB\n", a, b);
		}
	}
	return 0;
}