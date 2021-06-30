#include <stdio.h>
#define SIZE 46

int main() {
	int room[SIZE];
	int i;
	room[0] = 1;
	room[1] = 1;
	for(i=2;i<SIZE;i++) {
		room[i] = room[i-1] + room[i-2];
	}
	int n;
	while(scanf("%d", &n) == 1) {
		printf("%d\n", room[n]);
	}
	return 0;
}
