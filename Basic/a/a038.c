#include <stdio.h>

int main()
{
	int num;
	int flag = 1;
	while (scanf("%d", &num) != EOF )
	{
		if (num == 0) printf("0");
		while (num > 0) {
			if (flag & !(num%10)) {
				num /= 10;
				continue;
			}
			else flag = 0;
			printf("%d", num%10);
			num /= 10;
		}
		printf("\n");
	}
	return 0;
}