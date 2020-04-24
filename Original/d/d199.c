#include <stdio.h>
#include <math.h>

int main() {
	double n1, n2, n3;
	while (scanf("%lf%lf%lf", &n1, &n2, &n3) == 3) {
		double ans = sqrt( (n1+n2+n3)*(n1+n2+n3) - 4*n1*n3 );
		printf("%d\n", (int)ans);
	}
	return 0;
}