#include <stdio.h>

int main() {
	int N, S, M;
	while (scanf("%d%d", &N, &S) != EOF) {
		int Ai[N], Xi[N], i, j;
		for (i = 0; i < N; i++)
			scanf("%d", &Ai[i]);
		
		scanf("%d", &M);
		for (i = 0; i < M; i++) {
			int score = 0;
			for (j = 0; j < N; j++) {
				scanf("%d", &Xi[j]);
				
				if (Xi[j] == Ai[j]) score += S;
			}
			printf("%d\n", score);
		}
	}
	
	return 0;
}
