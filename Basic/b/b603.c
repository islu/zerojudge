#include <stdio.h>

int GCD(int, int);

int main() 
{
	int x1, y1, x2, y2;
	while (scanf("%d%d%d%d", &x1, &y1, &x2, &y2) != EOF)
	{
		int a, b, c, d, gcd;
		a = (x2 - x1) * (x2 - x1);
		b = y2 - y1;
		c = -2 * x1 * (y2 - y1);
		d = (y2 - y1) * x1 * x1 + y1 * (x2 - x1) * (x2 - x1);
		gcd = GCD(a, b);
		gcd = GCD(gcd, c);
		gcd = GCD(gcd, d);

		printf("%dy = %dx^2 + %dx + %d\n", a/gcd, b/gcd, c/gcd, d/gcd);
	}
	return 0;
}

int GCD(int a, int b) {
	int i, max;
	
	if (a < 0) 
		a *= -1;
	if (b < 0)
		b *= -1;

	for ( i = 1; i <= a && i <= b; i++)
		if( (a % i) == 0 && ( b % i) == 0) 
			max = i;
	return max;
}