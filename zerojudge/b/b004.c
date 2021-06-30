#include <stdio.h>
#include <math.h>
#define PI 2*acos(0)

int main() {
	double D, L;
	while(scanf("%lf%lf", &D, &L) == 2) {
		printf("%.3lf\n", PI * (L/2) * sqrt( ((L/2)*(L/2)) - ((D/2)*(D/2)) ));
	}
	return 0;
}
