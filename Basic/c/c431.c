#include <stdio.h>
#define SIZE 101

int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		int a[SIZE] = {0};
		int input, i, j;
		
		for (i = 0; i < n; i++) {
			scanf("%d", &input);
			a[input]++;
		}
		
		for (i = 1; i < SIZE; i++)
			for (j = 0; j < a[i]; j++)
				printf("%d ", i);

		printf("\n");
	}
	return 0;
}