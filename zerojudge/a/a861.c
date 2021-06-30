#include <stdio.h>

int main() {
	int H, W;
	while(scanf("%d%d", &H, &W) !=EOF) {
		printf("%d\n", (H+W)*2);
	}
	return 0;
}
