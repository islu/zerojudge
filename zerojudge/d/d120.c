#include <stdio.h>

int main()
{
	int n;
	while (scanf("%d", &n) != EOF && n != 0)
	{
		int i;
		int count = 0;
		printf("%d : ", n);
		for (i = 2; n > 1; i++) {
			if (n % i) continue;
			count++;
			while (n % i == 0) {
				n /= i;
			}
		}
		printf("%d\n", count);
	}
	return 0;
}