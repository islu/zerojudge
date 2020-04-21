#include <stdio.h>

int main() {
	int n, x, y, z;
	int i;
	while (scanf("%d", &n) != EOF) {
		for (i = 0; i < n; i++) {
			int day = 0, count = 0;
			scanf("%d%d%d", &x, &y, &z);
			do {
				count += y;
				day++;
				if (count >= x) break;
				count -= z;
				if (y <= z) {
					day = 0;
					break;
				}
			} while (count < x);
			if (day == 0) printf("Poor Snail\n");
			else printf("%d\n", day);
		}
	}
	return 0;
}