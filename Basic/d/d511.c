#include <stdio.h>

int main() {
	int a, b, c;
	int i;
	int count = 0;
	for (i = 0; i < 5; i++) {
		scanf("%d%d%d", &a, &b, &c);
		if (a>0 & b>0 & c>0 & a+b>c & b+c>a & a+c>b) {
			count++;
		}
	}
	printf("%d", count);
	count = 0;
	return 0;
}