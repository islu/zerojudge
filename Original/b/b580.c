#include <stdio.h>

struct Point {
	int x;
	int y;
};

int main() {
	int T;
	while (scanf("%d", &T) != EOF) {
		int n, c;
		for (c = 0; c < T; c++) {
			scanf("%d", &n);
			int matrix[n][n];
			int i, j;
			struct Point st;
			
			for (i = 0; i < n; i++)
				for (j = 0; j < n; j++)
					matrix[i][j] = -1;
				
			st.x = n / 2;
			st.y = n / 2;
			int flag = 1;
			int counter = 1;

			while (1) {
				matrix[st.x][st.y] = counter;

				if (matrix[st.x][st.y] == n*n) break;
				
				if (flag == 1) {
					if (st.y+1 >= n || matrix[st.x][st.y+1] != -1) flag = 4;
					else {
						st.y++;
						flag++;
						counter++;
					}
				}
				else if (flag == 2) {
					if (st.x-1 < 0 || matrix[st.x-1][st.y] != -1) flag--;
					else {
						st.x--;
						flag++;
						counter++;
					}
				}
				else if (flag == 3) {
					if (st.y-1 < 0 || matrix[st.x][st.y-1] != -1) flag--;
					else {
						st.y--;
						flag++;
						counter++;
					}
				}
				else if (flag == 4) {
					if (st.x+1 >= n || matrix[st.x+1][st.y] != -1) flag--;
					else {
						st.x++;
						flag = 1;
						counter++;
					}
				}
				
			}
			for (i = 0; i < n; i++) {
				for (j = 0; j < n; j++) {
					printf("%4d", matrix[i][j]);
					if (j != n-1) printf(" ");
				}
				printf("\n");
			}
		}
	}
	return 0;
}