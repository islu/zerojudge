#include <stdio.h>

void swap(int *a, int *b) {
	int t;
	t=*a;
	*a=*b;
	*b=t;
}

int main() {
	long long T, N, W, K, X, Y;
	long long A[505];
	long long i, j, k;
	while (scanf("%lld", &T) != EOF) {
		for (i = 0; i < T; i++) {
			scanf("%lld %lld", &N, &W);
			for (j = 0; j < N; j++) {
				scanf("%lld", &A[j]);
			}
			for (j = 0; j < W; j++) {
				long long temp = 0;
				scanf("%lld", &K);
				if (K == 1) {
					scanf("%lld %lld", &X, &Y);
					if (X > Y) swap(&X,&Y);
					temp = A[X];
					for (k = X; k <= Y; k++) {
						if (temp < A[k]) temp = A[k];
					}
					printf("%lld\n", temp);
				}
				else if (K == 2) {
					scanf("%lld %lld", &X, &Y);
					if (X > Y) swap(&X,&Y);
					for (k = X; k <= Y; k++) {
						temp += A[k];
					}
					printf("%lld\n", temp / (Y-X+1));
				}
				else {
					scanf("%lld", &X);
					printf("%lld\n", A[X]);
				}
			}
		}
	}
	return 0;
}