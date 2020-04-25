#include <stdio.h>

int main() {
	int N;
	int i;
	int x1, y1, x2, y2, x3, y3;
	int ux1 = 0, ux2 = 0, uy1 = 0, uy2 = 0;
	while (scanf("%d", &N) != EOF) {
		for (i = 0; i < N; i++) {
			scanf("%d%d%d%d%d%d", &x1, &y1, &x2, &y2, &x3, &y3);
			ux1 = x2 - x1;
			uy1 = y2 - y1;
			ux2 = x3 - x1;
			uy2 = y3 - y1;
			if ((ux1*uy2-ux2*uy1)==0 && (ux1*ux1+uy1*uy1)>(ux2*ux2+uy2*uy2) && (ux1*ux2+uy1*uy2)>=0) {
				printf("該死的東西!竟敢想讓我死！\n");
			} 
			else printf("父親大人!母親大人!我快到了！\n");
			ux1 = uy1 = ux2 = uy2 = 0;
		}
	}
	return 0;
}