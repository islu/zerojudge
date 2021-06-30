#include <stdio.h>
#define NUMBER 300

int main() {
	double c;
	double store[NUMBER];
	int i;
	store[0]=0.0;
	for(i=1;i<NUMBER;i++) {
		store[i] = store[i-1]+1.0/(i+1);
	}
	while(scanf("%lf", &c) !=EOF) {
		for(i=0;i<NUMBER;i++) {
			if(store[i]>=c) break;
		}
		printf("%d card(s)\n", i);
	}
	return 0;
}
