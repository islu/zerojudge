#include <stdio.h>

int main() {
	double a, b, c, d;
	double det=0;
	while (scanf("%lf%lf%lf%lf", &a, &b, &c, &d) == 4) {
		if(a==0 && b==0 && c==0 && d==0) break;
		det = a*d - b*c;
		if (det == 0) printf("cheat!\n");
		else {
			b *= -1;
			c *= -1;
			printf("%.5lf %.5lf\n", d/det, b/det);
			printf("%.5lf %.5lf\n", c/det, a/det);
		}
	}
	return 0;
}