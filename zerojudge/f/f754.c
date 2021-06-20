#include <stdio.h>

int main() {
	int N;
	while (scanf("%d", &N) != EOF) {
		long long i, j;
		long long M, K;
		for (i = 0; i < N; i++) {
			scanf("%lld%lld", &M, &K);
			printf("Case %d :\n", i + 1);
			for (j = 0; j < K; j++) {
				if (j + 1 == K) {
					printf("第%lld位 : 拿%lld元並說DD! BAD!\n", j + 1, M / K + M % K);
				} else {
					printf("第%lld位 : 拿%lld元並說DD! BAD!\n", j + 1, M / K);
				}
			}
		}
	}
	return 0;
}
