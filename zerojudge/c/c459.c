#include <stdio.h>
#include <math.h>

long long baseX_to_decimal(long long, long long);
long long to_narcissistic_number(long long, long long);
long long count_digit(long long);

int main()
{
	long long b, n;
	while(scanf("%lld%lld", &b, &n) != EOF) {
		long long digit = count_digit(n);
		long long decimal = baseX_to_decimal(b, n);
		long long narcissistic_number = to_narcissistic_number(n, digit);
		if (narcissistic_number == decimal)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}

long long baseX_to_decimal(long long base, long long n) {
	long long decimal = 0;
	double counter = 0.0;
	while (n) {
		decimal += ( n % 10) * (long long)pow((double)base, counter);
		n /= 10;
		counter++;
	}
	return decimal;
}

long long to_narcissistic_number(long long n, long long digit) {
	long long narcissistic_number = 0;
	while (n) {
		narcissistic_number += (long long)pow((double)(n % 10), (double)digit);
		n /= 10;
	}
	return narcissistic_number;
}

long long count_digit(long long n) {
	long long counter = 0;
	while (n) {
		n /= 10;
		counter++;
	}
	return counter;
}
