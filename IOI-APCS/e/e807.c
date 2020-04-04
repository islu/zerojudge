#include <stdio.h>
#define DAYS 7
#define P 4

int maxIs(double*, int);

int main() {
	double M, A, N, E;
	double rainfall[DAYS] = {0.0};
	double period[P] = {0.0};
	int i, j;
	
	for (i = 0; i < DAYS; i++) {
		scanf("%lf%lf%lf%lf", &M, &A, &N, &E);
		rainfall[i] = M+A+N+E;
		period[0] += M;
		period[1] += A;
		period[2] += N;
		period[3] += E;
	}
	
	int max_rainfall = maxIs(rainfall, DAYS);
	int max_period = maxIs(period, P);
	
	printf("%d\n", max_rainfall+1);
	if (max_period == 0) printf("morning\n");
	else if (max_period == 1) printf("afternoon\n");
	else if (max_period == 2) printf("night\n");
	else if (max_period == 3) printf("early morning\n");
	
	return 0;
}

int maxIs(double *ary, int size) {
	int i;
	double max = 0.0;
	int result = -1;
	for (i = 0; i < size; i++) {
		if (ary[i] > max) {
			max = ary[i];
			result = i;
		}
	}

	return result;
}