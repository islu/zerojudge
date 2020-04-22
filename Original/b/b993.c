#include <stdio.h>

int main() {
	int N;
	while (scanf("%d", &N) != EOF) {
		int P[N], i, max;
		max = 0;
		for (i = 0; i < N; i++) {
			scanf("%d", &P[i]);
			if (max < P[i]) max = P[i];
		}
		printf("%d\n", max);
	}
	return 0;
}