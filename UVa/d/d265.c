#include <stdio.h>

int main()
{
	int n;
	int i;
	int stone;
	while (scanf("%d", &n) == 1 && n != 0)
	{
		int ans = 0;
		for (i = 0; i < n; i++) {
			scanf("%d", &stone);
			ans ^= stone;
		}
		if (ans == 0) printf("No\n");
		else printf("Yes\n");
	}
	return 0;
}