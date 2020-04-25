#include <stdio.h>

long long gcd(long long, long long);
long long lcm(long long, long long, long long);

int main() {
	int N;
	int i;
	while (scanf("%d", &N) != EOF && N != 0) {
		long long number[15] = {0};
		long long w = 0;
		scanf("%lld%lld", &number[0], &number[1]);
		w = lcm(number[0], number[1], gcd(number[0], number[1]));
		for (i = 2; i < N; i++) {
			scanf("%lld", &number[i]);
			w = lcm(w, number[i], gcd(w, number[i]));
		}
		printf("%lld\n", w);
	}
	return 0;
}

long long gcd(long long a, long long b) {
	long long max = 0;
	do {
		a %= b;
		if(a == 0) {
			max = b;
			break;
		} 
		b %= a;
		max = a;
	} while (b != 0);
	return max; 
}

long long lcm(long long a, long long b, long long max) {
	return (a*b)/max;
}