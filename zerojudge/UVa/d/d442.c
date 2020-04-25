#include <stdio.h>

int main()
{
	int t, n;
	int i;
	while (scanf("%d", &t) != EOF)
	{
		for (i = 1; i <= t; i++) {
			int ans = 0;
			scanf("%d", &n);
			printf("Case #%d: %d is ", i, n);
			while (1) {
				while (n != 0) {
					ans += (n%10) * (n%10);
					n /= 10;
				}
				if (ans == 1) break;
				else if (ans == 4) break;
				n = ans;
				ans = 0;
			}
			
			if (ans == 1) printf("a Happy number.\n");
			else if (ans == 4) printf("an Unhappy number.\n");
		}
	}
	return 0;
}