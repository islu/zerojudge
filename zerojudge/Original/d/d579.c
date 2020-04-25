#include <stdio.h>
#include <math.h>

int main() {
	double N;
	while (scanf("%lf", &N) !=EOF) {
		printf("|%.4lf|=%.4lf\n", N, fabs(N));
	}
	return 0;
}