#include <stdio.h>
#include <math.h>

int main() {
	long long a, n;
	while (scanf("%lld %lld", &a, &n) == 2) {
		printf("%.0lf\n", pow(a,n));
	}
	return 0;
}