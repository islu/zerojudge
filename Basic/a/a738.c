#include <stdio.h>

int main()
{
	int a, b;
	while(scanf("%d%d", &a, &b) != EOF)
	{
		int max = 0;		
		do {
			a %= b;
			if (a == 0) {
				max = b;
				break;
			} 
			b %= a;
			max = a;
		} while (b != 0);
		
		printf("%d\n", max);
	}
	return 0;
}