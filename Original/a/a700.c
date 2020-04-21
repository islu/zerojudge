#include <stdio.h>
#include <math.h>

int main() {
	double i, j;
	while (scanf("%lf%lf", &i, &j) != EOF) {
		printf("%.0lf\n", pow(2, (i-1)*8+j-1));
	}
	return 0;
}