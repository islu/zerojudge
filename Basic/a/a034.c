#include <stdio.h>

int main()
{
	int n;
	int binary[100];
	int i = -1;
	while (scanf("%d", &n) != EOF)
	{
		do {
			i++;
			binary[i] = n % 2;
			n /= 2;
		} while (n != 0);
		
		for (i; i >= 0; i--)
			printf("%d", binary[i]);

		printf("\n");
	}
	return 0;
}