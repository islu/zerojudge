#include <stdio.h>

int main()
{
	int t;
	while (scanf("%d", &t) != EOF)
	{
		int n, m;
		int i;
		for (i = 0; i < t; i++) {
			scanf("%d%d", &n, &m);
			printf("%d\n", (n/3)*(m/3));
		}
	}
	return 0;
}