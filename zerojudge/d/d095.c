#include <stdio.h>
#include <math.h>

int main()
{
	double H, M, H_angle, M_angle, angle;
	while (scanf("%lf:%lf", &H, &M) != EOF) 
	{
		if(H == 0.0 && M == 0.0) break;

		H_angle = H * 30.0 + M / 60.0 * 30.0;
		M_angle = M * 6.0;
		angle = fabs(H_angle - M_angle);
		printf("%.3lf\n", (angle > 180.0) ? 360.0 - angle : angle );
	}
	return 0;
}