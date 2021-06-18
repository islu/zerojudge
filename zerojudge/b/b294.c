#include <stdio.h>

int main()
{
	int n;
	while (scanf("%d", &n) != EOF)
  {
    int i;
  	int food;
  	int total = 0;
		for (i = 1; i <= n; i++) {
			scanf("%d", &food);
			total += food * i;
		}
		printf("%d\n", total);
	}
	return 0;
}
