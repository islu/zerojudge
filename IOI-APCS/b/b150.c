#include <stdio.h>
#define money 300

int main() {
	int budget[13];
	int i;
	int hold;
	while (scanf("%d", &budget[1]) == 1) {
		int x = 0;
		int store = 0;
		for (i = 2; i <= 12; i++) {
			scanf("%d", &budget[i]);
		}
		for (i = 1; i <= 12; i++) {
			x += money - budget[i];
			if (x < 0) break;
			else {
				store += (x/100) * 100;
				x -= (x/100) * 100;
			}
		}
		if (x < 0) printf("-%d\n", i);
		else printf("%d\n", x + (store*120)/100);
	}
	return 0;
}