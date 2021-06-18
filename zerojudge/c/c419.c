#include <stdio.h>

int main() {
	int n;
	int i, j;
	while (scanf("%d", &n) == 1) {
		for (i = 0; i < n; i++) {
			for (j = n-i-1; j > 0; j--)
				printf("_");

			for (j = n+i+1; j > n; j--)
				printf("*");

			printf("\n");
		}
	}
	return 0;
}