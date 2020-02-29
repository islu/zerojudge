#include <stdio.h>
#include <math.h>

int main()
{
	int a, b, c;
	float D;
	int sqr;
	int x1, x2;
	while (scanf("%d%d%d", &a, &b, &c) != EOF)
	{
		D = (b*b)- 4*(float)a*c;
		if (a == 0) printf("No real root\n");
		else if (D > 0) {
			sqr = (int)sqrt(D);
			x1 = ((-b)+ sqr)/(2*a);
			x2 = ((-b)- sqr)/(2*a);
			printf("Two different roots x1=%d , x2=%d\n", x1, x2);
		}
		else if (D == 0) {
			x1 = (-b) / (2*a);
			printf("Two same roots x=%d\n", x1);
		}
		else printf("No real root\n");
	}
	return 0;
}