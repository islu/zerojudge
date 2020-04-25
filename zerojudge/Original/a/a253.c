#include <stdio.h>

int main() {
	int mushroom[101][1] = {0};
	int S, N;
	int i;
	while (scanf("%d", &S) == 1 && S != -1) {
		scanf("%d", &N);
		mushroom[S][0] += N;
	}
	while (scanf("%d", &S) == 1 && S != -1) {
		scanf("%d", &N);
		mushroom[S][0] += N;
	}
	for (i = 0; i <= 100; i++) {
		if (mushroom[i][0] != 0) printf("%d %d\n", i, mushroom[i][0]);
	}
	return 0;
}