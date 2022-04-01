#include <stdio.h>

int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		int i, j;
		for (i = 0; i < n; i++) {
			for (j = 0; j < n; j++) {
				if (i % 2 == 0) {
					printf("%d ", (i*n)+(j+1));
				} else {
					printf("%d ", (i*n)+(n-j));
				}
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}
