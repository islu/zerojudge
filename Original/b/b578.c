#include <stdio.h>

int main() {
	unsigned long long line[3];
	unsigned long long hold;
	int T;
	int i, j, k;
	while (scanf("%d", &T) != EOF) {
		for (i = 0; i < T; i++) {
			scanf("%llu%llu%llu", &line[0], &line[1], &line[2]);
			for (j = 0; j < 2; j++) {
				for (k = 0; k < 2; k++) {	
					if (line[k] > line[k+1]) { 
						hold = line[k];
						line[k] = line[k+1];
						line[k+1] = hold;
					}
				}
			}
			if (line[0]*line[0] < line[2]*line[2]-line[1]*line[1])       printf("obtuse triangle\n");
			else if (line[0]*line[0] == line[2]*line[2]-line[1]*line[1]) printf("right triangle\n");
			else if (line[0]*line[0]> line[2]*line[2]-line[1]*line[1])   printf("acute triangle\n");
		}
	}
	return 0;
}