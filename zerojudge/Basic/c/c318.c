#include <stdio.h>

int main() {
	int N, T;
	while (scanf("%d%d", &N, &T) != EOF) {
		int i, j, S[N], D[N], point, max, index;
		
		for (i = 0; i < N; i++)
			scanf("%d%d", &S[i], &D[i]);

		point = 0;

		for (i = 0; i < T; i++) {
			max = 0;
			for (j = 0; j < N; j++) {
				if(max < S[j]) {
					max = S[j];
					index = j;
				}
			}
			if(max) {
				point += max;
				S[index] -= D[index];
			}
			else break;
		}
		printf("%d\n", point);
	}
	return 0;
}