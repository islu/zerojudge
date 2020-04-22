#include <stdio.h>

long long random(long long, long long);

int main() {
	long long x, n ,m, random_number;
	while (scanf("%lld%lld%lld", &x, &n, &m) != EOF) {
		int i;
		for (i = 0; i < m; i++) {
			printf("%lld ", x);
			random_number = random(x, n);
			x = random_number;
		}
		printf("\n");
	}
	return 0;
}

long long random(long long x, long long n) {
	return (x * x) % n;
}