#include <stdio.h>

int main() {
	int n;
	int i;
	int class;
	int total = 0;
	scanf ("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &class);
		if (total < class) total = class;
	}
	printf("%d", total);
	return 0;
}