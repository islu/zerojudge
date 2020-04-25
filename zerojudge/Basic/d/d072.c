#include <stdio.h>

int main() {
	int n;
	int i;
	int y;
	scanf("%d", &n);
	for (i = 1; i < n+1; i++) {
		scanf("%d", &y);
		if (y%4 == 0 && y%100 != 0) printf("Case %d: a leap year\n", i);
		else if(y%400 == 0) printf("Case %d: a leap year\n", i);
		else printf("Case %d: a normal year\n", i);
	}
	return 0;
}