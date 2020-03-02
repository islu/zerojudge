#include <stdio.h>

int main() {
	int N, K, W;
	while (scanf("%d%d%d", &N, &K, &W) != EOF) {
		int total;
		total = N;
		while (N >= K) {
			total += N/K * W;
			N = N%K + N/K * W;
		}
		printf("%d\n", total);
	}
	return 0;
}