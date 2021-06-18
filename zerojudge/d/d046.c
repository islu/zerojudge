#include <stdio.h>

int main() {
	int n, w, i, count;
	scanf("%d", &n);
	count = 0;
	for (i = 0; i < n; i++) {
		scanf("%d", &w);
		if (w <= 10) count++;
	}
	printf("%d\n", count);
	return 0;
}