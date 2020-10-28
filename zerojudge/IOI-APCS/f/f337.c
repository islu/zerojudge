#include <stdio.h>

int main() {
	int N, M;
	while (scanf("%d%d", &N, &M) != EOF) {
		if (N*2 > M*8)      printf("Not enough\n");
		else if (M*8 > N*3) printf("Too much\n");
		else                printf("Yes\n");
	}
	
	return 0;
}
