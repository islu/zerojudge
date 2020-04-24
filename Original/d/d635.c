#include <stdio.h>

int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		if (n < 0) break;
		printf("%o\n", n);
	}
	printf("-1");
	return 0;
}