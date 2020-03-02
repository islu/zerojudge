#include <stdio.h>
#include <math.h>

int main() {
	int N;
	while (scanf("%d", &N) != EOF) {
		float x[N], y[N], temp, max;
		int i, j, pA, pB;
		max = -1.0;
		for (i = 0; i < N; i++) {
			scanf("%f %f", &x[i], &y[i]);
		}

		for (i = 0; i < N-1; i++) {
			for (j = i+1; j < N; j++) {
				temp = sqrt(pow(x[i]-x[j], 2) + pow(y[i]-y[j], 2));
				if (max < temp) {
					max = temp;
					pA = i;
					pB = j;
				}
			}
		}
		printf("%d %d\n", pA, pB);
	}
	return 0;
}