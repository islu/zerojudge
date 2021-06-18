#include <stdio.h>

int main() {
	int currentValue;
	int m, d;
	while (scanf("%d%d", &m, &d) != EOF) {
		if (m == 6 && d == 12) {
			printf("Yes\n");
		} else {
			printf("No\n");
		}
	}
	return 0;
}
