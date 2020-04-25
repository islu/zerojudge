#include <stdio.h>

int main() {
	int N;
	while (scanf("%d", &N) != EOF) {
		int i;
		int A;
		long long B = 0;
		for (i = 0; i < N; i++) {
			scanf("%d", &A);
			B += A;
			printf("%lld ", B);
		}
		printf("\n");
	}
	return 0;
}
