#include <stdio.h>

int main()
{
	int n;
	while (scanf("%d", &n) != EOF)
	{
		int i;
		for (i = 0; i < n; i++) {
			int a, b;
			scanf("%d%d", &a, &b);
			if (a > b) printf(">\n");
			else if (a < b) printf("<\n");
			else printf("=\n");
		}
	}
	return 0;
}