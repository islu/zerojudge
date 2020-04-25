#include <stdio.h>
#include <string.h>
#define SIZE 101

void draw(char[][SIZE], int, int, int);
void mark(char[][SIZE], int, int, int);

int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		int i, j;
		char map[SIZE][SIZE];
		for (i = 0; i < n; i++)
			scanf("%s", map[i]);

		for (i = 0; i < n; i++)
			for (j = 0; j < n; j++)
				if (map[i][j] == '*') draw(map, n, i, j);

		for (i = 0; i < n; i++)
			printf("%s\n", map[i]);
	}
	return 0;
}

void draw(char map[][SIZE], int size, int x, int y) {
	mark(map, size, x-1, y-1);
	mark(map, size, x, y-1);
	mark(map, size, x+1, y-1);
	mark(map, size, x-1, y);
	mark(map, size, x+1, y);
	mark(map, size, x-1, y+1);
	mark(map, size, x, y+1);
	mark(map, size, x+1, y+1);
}

void mark(char map[][SIZE], int size, int x, int y) {
	if (x < 0 || y < 0 || x >= size || y >= size) {}
	else if (map[x][y] == '-') map[x][y] = '1';
	else if ('1' <= map[x][y] && map[x][y] <= '9') map[x][y] += 1;
}