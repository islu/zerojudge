#include <stdio.h>

int main() {
	int n;
	int sum;
	scanf("%d", &n);
	sum = n/12*50 + n%12*5;
	printf("%d", sum);
	return 0;
}