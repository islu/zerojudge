#include <stdio.h>

int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		long long A[n];
		int q, l, r;
		int i;

		scanf("%lld", &A[0]);
		for (i = 1; i < n; i++) {
			scanf("%lld", &A[i]);
			A[i] += A[i-1];
		}

		scanf("%d", &q);
		for (i = 0; i < q; i++) {
			scanf("%d%d", &l, &r);
			if (l == 1) printf("%lld\n", A[r-1]);
			else  printf("%lld\n", A[r-1]-A[l-2]);
		}

	}
	return 0;
}