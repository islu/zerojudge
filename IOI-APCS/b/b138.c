#include <stdio.h>
#define APPLE 10

int main() {
	int apple[11];
	int i;
	int count = 0;
	for (i = 0; i < APPLE + 1; i++) {
		scanf("%d", &apple[i]);
	}
	for (i = 0; i < APPLE; i++) {
		if (apple[10] + 30 >= apple[i]) count++;
	}
	printf("%d\n", count);
	count = 0;
	return 0;
}