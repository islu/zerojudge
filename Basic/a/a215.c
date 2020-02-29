#include <stdio.h>

int main()
{
	long long n, m;
	while (scanf("%lld%lld", &n, &m) !=E OF)
	{
		long long counter = 0;
		long long total = 0;
		while (total <= m) {
			counter++;
			total += n;
			n += 1;
		}
		if (counter == 0) counter++;
		printf("%lld\n", counter);
	}
	return 0;
}