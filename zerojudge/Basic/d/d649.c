#include <stdio.h>

int main() {
	int N;
	int i, j, k;
	while (scanf("%d", &N) != EOF) {
		if (N == 0) break;
		for (i = 0; i < N; i++){
			for (j = N-i-1; j > 0; j--)
				printf("_");

			for (k = N+i+1; k > N; k--)
				printf("+");

			printf("\n");
		}
	}
	return 0;
}