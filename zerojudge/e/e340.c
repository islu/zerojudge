#include <stdio.h>

int main() {
	int N;
	while (scanf("%d", &N) != EOF) {
		int i;
		long long B[N];
		int A;
		for (i = 0; i < N; i++)
			scanf("%lld", &B[i]);

		for (i = 0; i < N; i++) {
			if (i == 0) printf("%d ", B[i]);
			else printf("%d ", B[i]-B[i-1]);
		}
		printf("\n");
	}
	return 0;
}
