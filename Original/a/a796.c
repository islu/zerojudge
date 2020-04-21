#include <stdio.h>

int main() {
	int N, R, X, Y, P, K, A, B;
	while (scanf("%d", &N) != EOF) {
		int i, j;
		int city[N][N];
		
		for (i = 0; i < N; i++)
			for (j = 0; j < N; j++)
				city[i][j] = 0;

		scanf("%d", &R);
		for (i = 0; i < R; i++) {
			scanf("%d %d", &X, &Y);
			city[X-1][Y-1] = 1;
			city[Y-1][X-1] = 1;
		}

		scanf("%d", &P);
		for (i = 0; i < P; i++) {
			int ans = 0;
			scanf("%d", &K);
			if (K == 1) {
				scanf("%d", &A);
				for (j = 0; j < N; j++) {
					if (city[A-1][j] == 1 && A-1 != j) ans++;
				}
				printf("%d\n", ans);
			}
			else if (K == 2) {
				scanf("%d %d", &A, &B);
				if (city[A-1][B-1] == 1) printf("Yes\n");
				else printf("No\n");
			}
		}
	}
	return 0;
}