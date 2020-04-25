#include <stdio.h>

int main() {
	int n, m, a;
	while (scanf("%d%d%d", &n, &m, &a)!= EOF) {
		long long w, h;
		w = n / a;
		h = m / a;
		if (n % a) w++;
		if (m % a) h++;
		printf("%lld\n", w*h);
	}
	return 0;
}