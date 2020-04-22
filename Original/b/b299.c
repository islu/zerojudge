#include <stdio.h>

int main() {
	int T, N, M;
	int i, j;
	while (scanf("%d", &T) != EOF) {
		for (i = 0; i < T; i++) {
			scanf("%d%d", &N, &M);
			int wi[M];
			for (j = 0; j < M; j++) {
				scanf("%d", &wi[j]);
			}
			for (j = 0; j < M; j++) {
				if (N > wi[j]) break;
			}
			if (j == M) printf("YEEES!!! INKER!\n");
			else printf("NOOOO!!! JACKY XX!\n");
		}
	}
	return 0;
}