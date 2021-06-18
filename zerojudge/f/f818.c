#include <stdio.h>
#include <limits.h>

struct Lion {
	int H;
	int W;
};

typedef struct Lion Lion;

int main() {
	int N;
	while (scanf("%d", &N) != EOF) {
		int i;
		int minValue = INT_MAX;
		int minLionIndex = -1;
		Lion lions[N];
		for (i = 0; i < N; i++) {
			scanf("%d", &lions[i].H);
		}
		for (i = 0; i < N; i++) {
			scanf("%d", &lions[i].W);
			// 順便計算
			if (lions[i].H * lions[i].W < minValue) {
				minValue = lions[i].H * lions[i].W;
				minLionIndex = i;
			}
		}
		printf("%d %d", lions[minLionIndex].H, lions[minLionIndex].W);
	}
	return 0;
}
