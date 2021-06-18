#include <stdio.h>

int main() {
	int N;
	int i;
	int value;
	int counter = 1;
	int left = 0;
	int right = 0;
	while (scanf("%d", &N) != EOF) {
		for (i = 0; i < N; i++) {
			scanf("%d", &value);
			if (counter % 2 == 0) right += value;
			else left += value;
			counter++;
		}
		if (right > left) printf("right\n");
		else printf("left\n");
		left = right = 0;
		counter = 1;
	}
	return 0;
}