#include <stdio.h>

int main() {
	int H1, M1, H2, M2;
	while(scanf("%d%d%d%d", &H1, &M1, &H2, &M2) == 4) {
		if(H2>=H1 && M2>=M1)
			printf("%d %d\n", H2-H1, M2-M1);
		else if(H2>H1 && M2<M1)
			printf("%d %d\n", H2-H1-1, M2-M1+60);
		else if(H2<H1 && M2<M1)
			printf("%d %d\n", H2-H1+24-1, M2-M1+60);
		else if(H2<H1 && M2>=M1)
			printf("%d %d\n", H2-H1+24, M2-M1);
		else if(H2==H1 && M2<M1)
			printf("%d %d\n", 23, M2-M1+60);
		
	}
	return 0;
}
