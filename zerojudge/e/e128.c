#include <stdio.h>
#include <math.h>

int main() {
	double N;
	while (scanf("%lf", &N) != EOF) {
		if (N == 0.0) {
			break;
		}
		int side = (int)ceil(sqrt(N));
		int step = (side * side) - N + 1;
		// printf("%lf %d\n", sqrt(N), (int)ceil(sqrt(N)));
		// printf ("step: %d, side: %d\n", step, side);
		if (side % 2 == 0) {
			if (step <= side) {
				printf("%d %d\n", side, step);
			} else {
				printf("%d %d\n", side - (step - side), side);
			}
		} else {
			if (step <= side) {
				printf("%d %d\n", step, side);
			} else {
				printf("%d %d\n", side, side - (step - side));
			}
		}
	}
	return 0;
}
