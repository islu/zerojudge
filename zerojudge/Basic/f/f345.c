#include <stdio.h>

int main() {
	int N;
	while (scanf("%d", &N) != EOF) {
		int i, P[N];
		for (i = 0; i < N; i++) {
			scanf("%d", &P[i]);
		}
		for (i = N-1; i >= 0; i--) {
			printf("%d ", P[i]);
		}
		printf("\n");
	}
	
	return 0;
}
