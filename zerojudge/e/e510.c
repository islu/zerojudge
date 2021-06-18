// https://samchien.blogspot.com/2013/04/10056-what-is-probability.html
// ( p * q ^ (x - 1) ) / (1 - q ^ n)
#include <stdio.h>
#include <math.h>

int main()
{
	int S;
	while (scanf("%d ", &S) != EOF)
	{
		int i;
		for (i = 0; i < S; i++) {
			int N, x;
			double p;
			scanf("%d%lf%d", &N, &p, &x);
			double q = 1 - p;
			if (q == 1) printf("0.0000\n");
			else {
				double ans = pow(q, x-1)*p / (1-pow(q, N));
				printf("%.4lf\n", ans);
			}
			
		}
	}
	return 0;
}
