#include <stdio.h>

int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		double i, sum;
		i = 1.0;
		sum = 1.0;
		while (sum <= n) {
			i++;
			sum += 1 / i;
		}
		printf("%d\n", (int)i);
	}
	return 0;
}