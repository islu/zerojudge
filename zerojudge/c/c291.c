#include <stdio.h>

int main() {
	int N;
	while(scanf("%d", &N) != EOF) {
		int group[N];
		int pair = 0;
		int i, index, temp;
		for (i = 0; i< N;i++) 
			scanf("%d", &group[i]);
		for (i = 0; i < N; i++) {
			if (group[i] == -1) continue;
			index = i;
			while (group[index] != -1) {
				temp = index;
				index = group[temp];
				group[temp] = -1;
			}
			pair++;
		}
		printf("%d\n", pair);
	}
	return 0;
}