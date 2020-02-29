#include <stdio.h>

int main()
{
	double a1, b1, c1, a2, b2, c2;
	while (scanf("%lf%lf%lf%lf%lf%lf", &a1, &b1, &c1, &a2, &b2, &c2) != EOF)
	{
		if (b1*a2-b2*a1==0 && c1*a2-c2*a1!=0) printf("No answer\n");
		else if (b1*a2-b2*a1==0 && c1*a2-c2*a1==0) printf("Too many\n");
		else {
			printf("x=%.2lf\n", (b1*c2-b2*c1) / (b1*a2-b2*a1));
			printf("y=%.2lf\n", (c1*a2-c2*a1) / (b1*a2-b2*a1));
		}
	}
	return 0;
}