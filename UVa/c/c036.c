#include <stdio.h>

int main()
{
	double H, U, D, F;
	while (scanf("%lf%lf%lf%lf", &H, &U, &D, &F) != EOF)
	{
		if (H == 0) break;
		double fac = U * F / 100;
		double position = 0;
		int day = 0;

		while (1) {
			day++;
			position += U;
			if (position > H) break;
			position -= D;
			if (position < 0) break;
			U -= fac;
			if (U < 0) U = 0;
		}

		if (position > 0) printf("success on day %d\n", day);
		else if (position <= 0) printf("failure on day %d\n", day);
	}
	return 0;
}