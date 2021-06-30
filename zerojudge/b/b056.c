#include <stdio.h>
#define xr 0.5149
#define xg 0.3244
#define xb 0.1607 
#define yr 0.2654
#define yg 0.6704
#define yb 0.0642
#define zr 0.0248
#define zg 0.1248
#define zb 0.8504

int main()
{
	int n;
	while(scanf("%d", &n) != EOF) 
	{
		int i;
		double R, G, B;
		double X, Y, Z;
		double sum_of_Y = 0.0;
		for(i = 0; i < n * n; i++)
		{
			scanf("%lf %lf %lf", &R, &G, &B);
			X = xr * R + xg * G + xb * B;
			Y = yr * R + yg * G + yb * B;
			Z = zr * R + zg * G + zb * B;
			sum_of_Y += Y;
			printf("%.4lf %.4lf %.4lf\n", X, Y, Z);
		}
		printf("The average of Y is %.4lf\n", sum_of_Y / (n * n));
	}
	return 0;
}
