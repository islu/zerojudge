#include <stdio.h>

int main() {
	int N, M;
	int store[100][2];
	int i, j, k;
	while (scanf("%d", &N) == 1) {
		for (i = 1; i <= N; i++) {
			int sum = 0;
			int best = 2147483647;
			int best_index = 0;
			scanf("%d", &M);
			for (j = 0; j < M; j++)
				for (k = 0; k < 2; k++)
					scanf("%d", &store[j][k]);

			for (j = 0; j < M; j++) {
				sum += store[j][0]*60 + store[j][1];
				if (best > store[j][0]*60 + store[j][1]) {
					best = store[j][0]*60 + store[j][1];
					best_index = j;
				}
			}
			printf("Track %d:\n", i);
			printf("Best Lap: %d minute(s) %d second(s).\n", store[best_index][0], store[best_index][1]);
			printf("Average: %d minute(s) %d second(s).\n\n", (sum/M)/60, (sum/M)%60);
		}
	}
	return 0;
}
