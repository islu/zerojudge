#include <stdio.h>

int main() {
	int T, N;
	int i, j, k;
	while (scanf("%d", &T) == 1) {
		for (i = 0; i < T; i++) {
			int f[30] = {0};
			int hold;
			scanf("%d", &N);
			for (j = 0; j < 4; j++) {
				scanf("%d", &f[j]);
			}
			for (j = 4; j < N; j++) {
				f[j] = f[j-4] + f[j-1];
			}
			for (j = 0; j < N-1; j++) {
				for (k = 0; k < N-1-j; k++) {
					if (f[k] > f[k+1]) {
						hold = f[k];
						f[k] = f[k+1];
						f[k+1] = hold;
					}
				}
			}
			printf("%d\n", f[N/2]);
		}
	}
	return 0;
}