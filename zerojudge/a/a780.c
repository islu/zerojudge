#include <stdio.h>

int main() {
	double fo, fe, FA;
	while(scanf("%lf%lf%lf", &fo, &fe, &FA) == 3) {
		if(fo == 0 && fe == 0 && FA == 0) break;
		double M = 0;
		double FT = 0;
		M = fo / fe;
		FT = FA / M;
		printf("%.2lf %.2lf\n", M, FT);
	}
	return 0;
}
