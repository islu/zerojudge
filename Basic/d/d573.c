#include <stdio.h>

int backet[100001];

int main() {
	int n;
	int i, j;
	while (scanf("%d", &n) != EOF) {
		int c, p, x, y;
		for (i = 0; i < n; i++) {
			scanf("%d %d", &c, &p);
			for (j = 0; j < p; j++) {
				scanf("%d", &x);
				backet[x] = c;
			}
		}
		scanf("%d", &y);
		printf("%d\n", backet[y]);
	}
	return 0;
}