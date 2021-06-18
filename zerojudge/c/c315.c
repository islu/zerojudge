#include <stdio.h>

int main() {
	int N;
	int i;
	int a, b;
	int x = 0, y = 0;
	while (scanf("%d", &N) != EOF) {
		for (i = 0; i < N; i++) {
			scanf("%d%d", &a, &b);
			switch (a) {
				case 0:
					y += b;
					break;
				case 1:
					x += b;
					break;
				case 2:
					y -= b;
					break;
				case 3:
					x -= b;
					break;
			}
		}
		printf("%d %d", x, y);
		x = y = 0;
	}
	return 0;
}