#include <stdio.h>

int main() {
	int T;
	int i, j;
	int N, S;
	int xy[10000]; 
	int x2, y2;
	int d;
	int can_see_duck = 0;
	while (scanf("%d", &T) != EOF) {
		for (i = 0; i < T; i++) {
			scanf("%d%d", &N, &S);
			for (j = 0; j < N*2; j++) {
				scanf("%d", &xy[j]);
			}
			scanf("%d%d", &x2, &y2);
			for (j = 0; j < N*2; j += 2) {
				d = (xy[j]-x2) * (xy[j]-x2)+(xy[j+1]-y2) * (xy[j+1]-y2);
				if(d <= S * S) can_see_duck++;
			}
			printf("%d\n", can_see_duck);
			can_see_duck = 0;
		}
	}
	return 0;
}