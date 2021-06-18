#include <stdio.h>
#include <math.h>

int main() {
	double N, M;
	int result;
	while (scanf("%lf%lf", &N, &M) != EOF) {
		result = (int)(M*log10(N));
		if ((int)N == 1) printf("1\n");
		else if((int)N == 10) printf("%d\n", (int)M+1);
		else printf("%d\n", result+1);
	}
	return 0;
}