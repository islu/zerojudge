#include <stdio.h>
#define MAX 2600

int main() {
	int N, M;
	while (scanf("%d%d", &N, &M) != EOF) {
		int i, temp, count; 
		int check_in[MAX] = {0};
		count = 0;
		
		for (i = 0; i < M; i++) {
			scanf("%d", &temp);
			check_in[temp-1]++;
		}

		for (i = 0; i < N; i++) 
			if (check_in[i] != 2) count++;

		printf("%d\n", count);

	}
	return 0;
}