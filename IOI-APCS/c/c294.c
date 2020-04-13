#include <stdio.h>

int main() {
	long long line[3];
	long long hold;
	int i, j;
	while (scanf("%lld%lld%lld", &line[0], &line[1], &line[2]) !=EOF) {
		for (i = 0; i < 2; i++) {
			for (j = 0; j < 2; j++) {	
				if (line[j] > line[j+1]) { 
					// swap
					hold = line[j];
					line[j] = line[j+1];
					line[j+1] = hold;
				}
			}
		}
		printf("%lld %lld %lld\n", line[0], line[1], line[2]);
		if (line[0]<0 || line[1]<0 || line[2]<0 || line[0]+line[1]<=line[2]) printf("No\n");
		else if (line[0]*line[0]+line[1]*line[1] < line[2]*line[2]) 				 printf("Obtuse\n");
		else if (line[0]*line[0]+line[1]*line[1] == line[2]*line[2]) 				 printf("Right\n");
		else if (line[0]*line[0]+line[1]*line[1] > line[2]*line[2]) 				 printf("Acute\n");
	}
	return 0;
}