#include <stdio.h>

int main() {
	char opponent[5];
	int n;
	while (scanf("%s%d", &opponent, &n) != EOF) {
		int c, i, j;
		char player[5];
		for (c = 0; c < n; c++) {
			int a = 0;
			int b = 0;
			scanf("%s", &player);
			for (i = 0; i < 4; i++) {
				if (opponent[i] == player[i]) {
					a += 1;
					player[i] = 'x';
				} else {
					for (j = 0; j < 4; j++) {
						if (i != j && opponent[i] == player[j]) {
							b += 1;
							player[j] = 'x';
							break;
						}
					}
				}
			}
			printf("%dA%dB\n", a, b);
		}
	}
	return 0;
}
