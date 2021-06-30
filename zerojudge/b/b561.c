#include <stdio.h>
#define pi 3.14159

int main() {
	int n;
	double size;
	double store[2];
	int i;
	int counter=0;
	while(scanf("%d", &n) !=EOF) {
		for(i=0;i<n;i++) {
			scanf("%lf", &size);
			store[counter] += pi*(size/2)*(size/2);
		}
		counter++;
		if(counter==2) {
			if(store[0]>store[1]) printf("%.2lf\n", store[0]-store[1]);
			else printf("%.2lf\n", store[1]-store[0]);
			counter=0;
			store[0]=0.0;
			store[1]=0.0;
		}
	}
	return 0;
}
