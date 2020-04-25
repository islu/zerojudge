#include <stdio.h>

int main() {
	int n;
	int i, j;
	while (scanf("%d", &n) == 1) {
		for (i = 0; i < n; i++) {
			for (j = n; j >= n-i; j--)
				printf("*");

			printf("\n");
		}
	}
	return 0;
}