#include <stdio.h>

int main() {
	int a, b, c;
	scanf("%d%d", &a, &b);
	
	c = b>=a ? b-a : 100-a+b;
	
	printf("%d\n", c);
	
	return 0;
}