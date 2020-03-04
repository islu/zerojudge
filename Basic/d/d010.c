#include <stdio.h>

int main() {
	int n;
	int i;
	int sum = 1;
	while (scanf("%d", &n) != EOF) {
		for (i = 2; i < n; i++) {
			if (n % i == 0) sum += i;
		}
		if (sum > n) printf("盈數\n");
		else if (sum < n) printf("虧數\n");
		else printf("完全數\n");
		sum = 1;
	}
	return 0;
}