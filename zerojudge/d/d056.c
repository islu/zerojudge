#include <stdio.h>

int main() {
	int N, M, i, j;
	while (scanf("%d", &N) != EOF) {
		for (i = 0; i < N; i++) {
			scanf("%d", &M);
			int sum[M];
			for (j = 0; j < M; j++) {
				int t1, t2;
				scanf("%d%d", &t1, &t2);
				sum[j] = t1 + t2;
			}
			for (j = M-1; j >= 0; j--) {
				if (sum[j] >= 10) {
					sum[j-1] += sum[j] / 10;
					sum[j] %= 10;
				}
			}
			for (j = 0; j < M; j++) {
				printf("%d", sum[j]);
			}
			printf("\n\n");
		}
	}
	
	return 0;
}
