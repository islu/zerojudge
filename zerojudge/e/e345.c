#include <stdio.h>

int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		(n == 0) ? printf("0\n") : printf("%d\n", (n-1)%9+1);
	}
	return 0;
}