#include <stdio.h>

int main() {
	long long n;
	while (scanf("%lld", &n) == 1) 
	{
		long long h, s;
		long long ans = 0;
		h = (n - 1) / 2 + 1;
		s = (n + 1) * h / 2;
		//s = 4
		ans = 3 + (s - 3) * 2 + (s - 2) * 2 + (s - 1) * 2;
		printf("%lld\n", ans);
	}
	return 0;
}