#include <stdio.h>

int main()
{
	int n;
	int i;
	int count = 0;
	int flag = 0;
	while (scanf("%d", &n) !=EOF)
	{
		for (i = 2; i <= n; i++) {
			while(n % i == 0) {
				count++;
				n = n / i;
			}
			if (count == 1) {
				printf("%d", i);
			}
			else if (count > 1) {
				printf("%d^%d", i, count);
			}
			if (count!=0 && n!=1) printf(" * ");
			count=0;
		}
		printf("\n");
	}
	
	return 0;
}