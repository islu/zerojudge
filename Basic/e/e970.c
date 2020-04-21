#include <stdio.h>

int main() {
	int N;
	while (scanf("%d", &N) != EOF) {
		int i, ri[N], B, sum, M;
		for (i = 0; i < N; i++) {
			scanf("%d", &ri[i]);
		}
		
		B = ri[N-1];
		sum = 0;
		for (i = 0; i < N; i++) {
			if ((i+1) % B == 1) sum += ri[i];
		}
		M = sum % N;
		//printf("sum=%d, M=%d\n", sum, M);
		if (M == 0) printf("%d %d\n", N, ri[N-1]);
		else printf("%d %d\n", M, ri[M-1]);
	}
	return 0;
}
