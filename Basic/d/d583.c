#include <stdio.h>

int main() {
	int n;
	int i;
	int a;
	while (scanf("%d", &n) != EOF) {
		for (i = 1; i <= n; i++)
			scanf("%d", &a);
		for (i = 1; i <= n; i++)
			printf("%d ", i);
		printf("\n");
	}
	return 0;
}