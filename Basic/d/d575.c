#include <stdio.h>

int main() {
	long long x1, y1, x2, y2, r;
	long long hold;
	while (scanf("%lld%lld%lld%lld%lld", &x1, &y1, &x2, &y2, &r) !=EOF) {
		if (x2 > x1) {
			hold = x1;
			x1 = x2;
			x2 = hold;
		}
		if (y2 > y1) {
			hold = y1;
			y1 = y2;
			y2 = hold;
		}
		hold = x1-x2 + y1-y2;
		hold > r ? printf("alive\n") : printf("die\n");
	}
	return 0;
}