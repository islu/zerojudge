#include <stdio.h>

int main()
{
	int a, b, c, d, n;
	while (scanf("%d%d%d%d", &a, &b, &c, &d) != EOF)
	{
		if (a == 0 && b == 0 && c == 0 && d == 0) break;
		if (a > b) n = a - b; else n = a + 40 - b;
		if (b > c) n += c + 40 - b; else n += c - b;
		if (c > d) n += c - d; else n += c + 40 -d;
		n = n * 9;
		printf("%d\n", 1080+n);
	}
	return 0;
}