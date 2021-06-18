#include <stdio.h>

int main() {
	int a, b;
	while (scanf("%d%d", &a, &b) != EOF) {
		printf("%d\n", ((b-b%2)-(a+a%2))/2+1);
	}
	return 0;
}