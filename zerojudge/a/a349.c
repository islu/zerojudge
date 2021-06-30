#include <stdio.h>

int main() {
	int M[8];
	int N;
	int i;
	while(scanf("%d", &M[0]) !=EOF) {
		for(i=1;i<8;i++) {
			scanf("%d", &M[i]);
		}
		int R[8]={0};
		char action[10];
		int a1,a2,a3;
		scanf("%d", &N);
		for(i=1;i<=N;i++) {
			scanf(" %s", action);
			switch(action[0]) {
				case 'L':
					scanf("%d%d", &a1, &a2);
					R[a1]=M[a2];
					break;
				case 'S':
					scanf("%d%d", &a1, &a2);
					M[a1]=R[a2];
					break;
				case 'A':
					scanf("%d%d%d", &a1, &a2, &a3);
					R[a1]=R[a2]+R[a3];
					break;
				case 'M':
					scanf("%d%d", &a1, &a2);
					R[a1]=R[a2];
					break;
			}
		}
		printf("%d\n%d\n", R[0], M[0]);
	}
    return 0;
}
