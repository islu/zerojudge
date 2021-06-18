#include <stdio.h>

int main()
{
	int n;
	int i;
	int a = 0;
	int b = 0;
	int c = 0;
	int number;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &number);
		if (number % 3 == 0) a++;
		else if (number % 3 == 1) b++;
		else if(number % 3 == 2) c++;
	}
	printf("%d %d %d\n", a, b, c);
	return 0;
}