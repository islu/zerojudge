#include <stdio.h>

int main() {
	int x;
	while (scanf("%d", &x) != EOF) {
		printf("%d\n", x*3/10);
	}
	return 0;
}
