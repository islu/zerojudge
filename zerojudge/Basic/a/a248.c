#include <stdio.h>

int main()
{
	int a, b, N;
	int div;
	int remainder;
	while (scanf("%d%d%d", &a, &b, &N) != EOF)
	{
		if (b > 0) {
			printf("%d.", a/b);
			remainder = a % b * 10;
			div = remainder / b;
			while (N > 0) {
			printf("%d", div);
			remainder = remainder % b * 10;
			div = remainder / b;
			N--;
			}
		}
		printf("\n");
	}
	return 0;
}