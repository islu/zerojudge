#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int i;
	while (n > 0) {
		printf("%d\n", n);
		n /= 10;
	}
	
	return 0;
}
