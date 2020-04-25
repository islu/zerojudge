#include <stdio.h>

int main()
{
	int n, m;
	while (scanf("%d%d", &n, &m) != EOF)
	{
		int i, l, r;
		int S[100005] = {0};
		for (i = 1; i <= n; i++) {
			scanf("%d", &S[i]);
			S[i] = S[i-1] + S[i];
		}
		for (i = 0; i < m; i++) {
			scanf("%d%d", &l, &r);
			printf("%d\n", S[r] - S[l-1]);
		}
	}
	return 0;
}
