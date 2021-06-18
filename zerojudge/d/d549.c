#include <stdio.h>
#include <math.h>

int main() {
	double a, b, c;
	while (scanf("%lf%lf%lf", &a, &b, &c) != EOF) {
		printf("%.2lf\n", sqrt(a*a - b*b + c*c));
	}
	return 0;
}