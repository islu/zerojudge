#include <stdio.h>

int main() {
	int N;
	int i;
	int H1, M1, H2, M2, M3;
	int go_or_not = 0;
	scanf("%d", &N);
	
	for (i = 0; i < N; i++) {
		scanf("%d%d%d%d%d", &H1, &M1, &H2, &M2, &M3);
		go_or_not = (H2-H1)*60+(M2-M1)-M3;
		printf("%s\n", go_or_not >= 0 ? "Yes" : "No");
		go_or_not = 0;
	}
	return 0;
}