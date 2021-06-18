#include <stdio.h>

int main()
{
	int T, N, M;
	int i, j, k;
	int a, b;
	int flag = 1;
	int arr[12][12];
	while (scanf("%d", &T) == 1)
	{
		for (i = 0; i < T; i++) {
			scanf("%d%d", &N, &M);
			for (j = 0; j < N; j++) {
				for (k = 0; k < M; k++) {
					scanf("%d", &arr[j][k]);
				}
			}
			for (j=0, a=N-1; j<N && flag==1; j++, a--) {
				for (k=0, b=M-1; k < M; k++, b--) {
					if (arr[j][k] != arr[a][b]) {
						flag = 0;
						break;
					}
				}
			}
			
			if (flag) printf("go forward\n");
			else printf("keep defending\n");
			flag = 1;
		}
	}
	return 0;
}