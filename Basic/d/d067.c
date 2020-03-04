#include <stdio.h>

int main() {
	int y;
	scanf("%d", &y);
	if (y%4 == 0 && y%100 != 0) printf("a leap year\n");
	else if (y%400 == 0) printf("a leap year\n");
	else printf("a normal year\n");
	return 0;
}