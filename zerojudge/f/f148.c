#include <stdio.h>

struct Point {
	int X;
	int Y;
};
typedef struct Point Point;

int main() {
	int W, H;
	while (scanf("%d%d", &W, &H) != EOF) {
		int i, j;
		int N;
		int totalTaget = 0;
		Point points[26];
		// 初始值
		for (i = 0; i < 26; i++) {
			points[i].X = -1;
			points[i].Y = -1;
		} 
		// 讀取資料
		scanf("%d", &N);
		for (i = 0; i < W; i++) {
			for (j = 0; j < H; j++) {
				char p[2];
				scanf("%s", &p);
				if (p[0] != '0') {
					points[p[0] - 'a'].X = i;
					points[p[0] - 'a'].Y = j;
					totalTaget += 1;
				}
			}
		}
		
		if (totalTaget < N) {
			printf("Mission fail.\n");
		} 
		if (totalTaget >= N) {
			int counter = 0;
			for (i = 0; i < 26; i++) {
				if (points[i].X != -1 && points[i].Y != -1) {
					printf("%d %d\n", points[i].X, points[i].Y);
					counter += 1;
				}
				if (counter == N) {
					break;
				}
			}
		}
	}
	return 0;
}
