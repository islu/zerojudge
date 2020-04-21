#include <stdio.h>
#define denominator 17

int main() {
	int m, n;
	int i;
	int div;
	int remainder;
	int sum = 0;
	while (scanf("%d", &m) != EOF) {
		for (i = 0; i < m; i++) {
			scanf("%d", &n);
			remainder = 1 % denominator * 10;
			div = remainder / denominator;
			sum += div;
			while (n > 1) {
			remainder = remainder % denominator * 10;
			div = remainder / denominator;
			sum += div;
			n--;
			}
			printf("%d %d\n", div, sum);
			sum = 0;
		}
		printf("\n");
	}
	return 0;
}