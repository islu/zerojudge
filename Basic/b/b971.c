#include <stdio.h>
int main() 
{
	int a0, an, d;
	while (scanf("%d%d%d", &a0, &an, &d) == 3) {
		int n, i;
		n = (an - a0) / d + 1;
		for (i = 0; i < n; i++) {
			printf("%d ", a0);
			a0 += d;
		}
		printf("\n");
	}
	return 0;
}