#include <stdio.h>

int main() {
	int n, i;
	int f0 = 0, f1 = 1, temp = 0;
	scanf("%d", &n);
	for (i = 1; i < n; i++) {
		temp = f0 + f1;
		f0 = f1;
		f1 = temp;
	}
	printf("%d:%d\n", f1, f1+f0);
	return 0;
}