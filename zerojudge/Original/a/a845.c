#include <stdio.h>

int main() {
	int N;
	int A[200] = {0};
	int T;
	int i;
	int x, y;
	while (scanf("%d", &N) != EOF) {
		for (i = 0; i < N; i++) {
			scanf("%d", &A[i]);
		}
		scanf("%d", &T);
		for (i = 0; i < T; i++) {
			scanf("%d%d", &x, &y);
			printf("%d\n", A[x]+A[y]);
		}
	}
	return 0;
}