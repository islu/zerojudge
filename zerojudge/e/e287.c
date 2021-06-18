#include <stdio.h>
#define MAX 1000005

int main() {
	int n, m;
	
	scanf("%d%d", &n, &m);
	
	int map[n][m];
	int i, j;
	int sX = 0, sY = 0;
	int tX = 0, tY = 0;
	int temp = MAX;
	int fail = 0;
	int sum = 0;

	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			scanf("%d", &map[i][j]);
			if (temp > map[i][j]) {
				temp = map[i][j];
				sX = i;
				sY = j;
			}
		}
	}

	while (fail != 4) {
		fail = 0;
		temp = MAX;
		sum += map[sX][sY];
		map[sX][sY] = MAX;

		if (sX-1 < 0) fail++;
		else if (map[sX-1][sY] == MAX) fail++;
		else if (temp > map[sX-1][sY]) {
			temp = map[sX-1][sY];
			tX = sX-1;
			tY = sY;
		}

		if (sX+1 >= n ) fail++;
		else if (map[sX+1][sY] == MAX) fail++;
		else if (temp > map[sX+1][sY]) {
			temp = map[sX+1][sY];
			tX = sX+1;
			tY = sY;
		} 

		if (sY-1 < 0) fail++;
		else if (map[sX][sY-1] == MAX) fail++;
		else if (temp > map[sX][sY-1]){
			temp = map[sX][sY-1];
			tX = sX;
			tY = sY-1;
		} 

		if (sY+1 >= m) fail++;
		else if (map[sX][sY+1] == MAX) fail++;
		else if (temp > map[sX][sY+1]) {
			temp = map[sX][sY+1];
			tX = sX;
			tY = sY+1;
		}

		sX = tX;
		sY = tY;

	}

	printf("%d\n", sum);

	return 0;
}