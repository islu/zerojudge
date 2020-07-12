#include <stdio.h>
#define LAND 0
#define FENCE 1
#define BUG 9
#define CANT -1

int main() {
	int N;
	while (scanf("%d", &N) != EOF) {
		int i, land[N];
		int state = 0, temp = 0, flower = 0;
		for (i = 0; i < N; i++) {
			scanf("%d", &land[i]);
		}
		for (i = 0; i < N; i++) {
			if (land[i] == BUG) {
				if (i-1 > 0) {
					if (land[i-1] == 0)
						land[i-1] = CANT;
				}
				if (i+1 < N) {
					if (land[i+1] == 0)
						land[i+1] = CANT;
				}
				land[i] = CANT;
			}
		}
		for (i = 0; i < N; i++) {
			switch (state) {
				case 0:
					if (land[i] == FENCE) state = 1;
					break;
				case 1:
					if (land[i] == LAND) temp += 1;
					else if (land[i] == FENCE) {
						flower += temp;
						temp = 0;
					}
					break;
			}
		}
		
		printf("%d\n", flower);
	}
	
	return 0;
}