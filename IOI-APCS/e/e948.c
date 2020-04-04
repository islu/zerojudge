#include <stdio.h>

double BMR(double,double,double,double);

int main() {
	int N;
	while (scanf("%d", &N) != EOF) {
		int i;
		for (i = 0; i < N; i++) {
			double G, A, H, W;
			scanf("%lf%lf%lf%lf", &G, &A, &H, &W);
			double bmr = BMR(G,A,H,W);
			printf("%.2lf\n", bmr);
		}
	}
	return 0;
}

double BMR(double G, double A, double H, double W) {
	double result = 0.0;
	if (G == 0) {
		result = (9.6*W) + (1.8*H) - (4.7*A) + 655.0;
	}
	else if (G == 1) {
		result = (13.7*W) + (5.0*H) - (6.8*A) + 66.0;
	}
	return result;
}