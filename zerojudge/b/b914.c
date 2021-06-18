#include <stdio.h>

int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		int i, m;
		int sum  = 0;
		for (i = 0; i < n; i++) {
			scanf("%d", &m);
			sum += m;
		}
		printf("%d\n", sum/n + (sum%n > n/2));
	}
	return 0;
}