#include "stdio.h"
#include "math.h"

double distance(double x1, double y1, double x2, double y2) {
	return sqrt( (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2) );
}

int main() {
	int N, m;
	while(scanf("%d%d", &N, &m)!= EOF) {
		int i, j;
		double x[20]={0}, y[20]={0}, min=500.0;
		for(i=0;i<m;i++) {
			scanf("%lf", &x[i]);
			scanf("%lf", &y[i]);
		}
		for(i=0;i<m-1;i++) {
			for(j=i+1;j<m;j++) {
				if(min > distance(x[i], y[i], x[j], y[j]))
					min = distance(x[i], y[i], x[j], y[j]);
			}
		}
		
		printf("%.4lf\n", min);
	}
	return 0;
}
