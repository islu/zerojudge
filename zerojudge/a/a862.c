#include <stdio.h>

int main() {
	double V, R;
	while(scanf("%lf%lf", &V, &R) !=EOF) {
		printf("%.4lf\n", V/R*1000);
	}
	return 0;
}
