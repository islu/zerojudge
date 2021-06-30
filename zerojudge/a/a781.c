#include <stdio.h>
void drawBoard(int);

int main() {
	int n;
	while(scanf("%d", &n) == 1 && n != 0) {
		drawBoard(n);
		printf("\n");
	}
	return 0;
}

void drawBoard(int n) {
	int i, j, k, t;
	for(t=0;t<4;t++) {
		for(i=0;i<n;i++) {
			for(j=0;j<4;j++) {
				for(k=0;k<n;k++) {
					printf("#");
				}
				for(k=0;k<n;k++) {
					printf(".");
				}
			}
			printf("\n");
		}
		for(i=0;i<n;i++) {
			for(j=0;j<4;j++) {
				for(k=0;k<n;k++) {
					printf(".");
				}
				for(k=0;k<n;k++) {
					printf("#");
				}
			}
			printf("\n");
		}
	}
}
