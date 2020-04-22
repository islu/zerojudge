#include <stdio.h>
#include <math.h>

int main() {
	long long X;
	while(scanf("%lld", &X) != EOF) {
		double i = (double)X;
		long long H = (long long)sqrt(i);
		for (H; ;H++) {
			if (H*(H+1) == 2*X) break;
		}
		printf("%lld\n", H);
	}
	return 0;
}