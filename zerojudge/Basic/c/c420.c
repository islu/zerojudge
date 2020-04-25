#include <stdio.h>

int main() {
	int n;
	int i, j;
	while (scanf("%d", &n) == 1) {
		for (i = 1; i <= n; i++) {
			for (j = n; j > i; j--)
				printf("_");
			
			for (j = 1; j <= (i*2-1); j++)
				printf("*");

			for (j = n; j > i; j--)
				printf("_");

			printf("\n");
		}
		
	}
	return 0;
}