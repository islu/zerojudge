#include <stdio.h>

void swap(int *a, int *b) {
	int t;
	t =* a;
	*a = *b;
	*b = t;
}

int main() {
	int T, N, W, K, X, Y, E;
	int i, j, k;
	int A[1200];
	while (scanf("%d", &T) == 1) {
		for (i = 0; i < T; i++) {
			scanf("%d%d", &N, &W);
			for (j = 0; j < N; j++) {
				scanf("%d", &A[j]);
			}
			for (j = 0; j < W; j++) {
				scanf("%d%", &K);
				int max = 0;
				int sum = 0;
				int average = 0;
				switch (K) {
					case 1:
						scanf("%d%d", &X, &Y);
						if (X > Y) swap(&X,&Y);
						max = A[X];
						for (k = X; k <= Y; k++) {
							if (max < A[k]) max = A[k];
						}
						printf("%d\n", max);
						break;
					case 2:
						scanf("%d%d", &X, &Y);
						if (X > Y) swap(&X,&Y);
						for (k = X; k <= Y; k++) {
							sum += A[k];
						}
						average = sum / (Y-X+1);
						printf("%d\n", average);
						break;
					case 3:
						scanf("%d", &E);
						printf("%d\n", A[E]);
						break;
				}
			}
		}
	}
	return 0;
}