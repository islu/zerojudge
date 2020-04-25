#include <stdio.h>
#include <math.h>
#define PI 3.141592654

int main()
{
	double D, V, d;
	while (scanf("%lf%lf", &D, &V) != EOF) {
		if (D == 0 && V == 0) break;
		D = pow(D, 3);
		d = pow(D - 6 * V / PI, 1.00/3);
		printf("%.3lf\n", d);
	}	
	return 0;
}