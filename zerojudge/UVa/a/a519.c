#include <stdio.h>

int main()
{
	long long f[81] = {0};
	int i;
	f[0] = 1;
	f[1] = 1;
	for (i = 2; i < 81; i++)
		f[i] = f[i-2] + f[i-1];

	int n;
	while (scanf("%d", &n) == 1 && n != 0)
  {
		printf("%lld\n", f[n]);
	}
	return 0;
}
