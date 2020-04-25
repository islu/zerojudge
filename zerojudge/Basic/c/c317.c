#include <stdio.h>

int main() {
	int N;
	while (scanf("%d", &N) != EOF) {
		int X, a, b, i, j, coin, remind;
		for (j = 0; j < N; j++) {
			coin = -1;
			scanf("%d%d%d", &X, &a, &b);
				for (i = X/a; i >= 0; i--) {
				remind = X - a * i;
				if (remind == 0) {
					coin = i;
					break;
				}
				else if (remind % b == 0) {
					coin = i + remind / b;
					break;
				}
			}
			printf("%d\n", coin);
		}
	}
	return 0;
}