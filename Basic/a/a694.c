#include <stdio.h>

int main()
{
	int n, m;
	while (scanf("%d%d", &n, &m) != EOF)
	{
		int i, j;
		int a, b, c, d;
		int S[501][501] = {0};
		int ans = 0;
		for (i = 1; i <= n; i++) {
			for (j = 1; j <= n; j++) {
				scanf("%d", &S[i][j]);
				S[i][j] = S[i][j-1] + S[i][j];
			}
		}
		for (i = 0; i < m; i++) {
			scanf("%d %d %d %d", &a, &b, &c, &d);
			for (j = a; j <= c; j++)
				ans += S[j][d] - S[j][b-1];
			
			printf("%d\n", ans);
			ans = 0;
		}
	}
	return 0;
}