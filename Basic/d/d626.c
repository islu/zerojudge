#include <stdio.h>
#include <string.h>
#define SIZE 101

void draw(char[][SIZE], int, int, int);

int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		int i, x, y;
		char map[SIZE][SIZE];
		for (i = 0; i < n; i++)
			scanf("%s", map[i]);
		scanf("%d%d", &x, &y);
			
		draw(map, n, x, y);

		for (i = 0; i < n; i++)
			printf("%s\n", map[i]);
	}
	return 0;
}

void draw(char map[][SIZE], int size ,int x, int y) {
	if (x < 0 || y < 0 || x >= size || y >= size) {}
	else if (map[x][y] == '+') {}
	else {
		map[x][y] = '+';
		draw(map, size, x, y-1);
		draw(map, size, x-1, y);
		draw(map, size, x, y+1);
		draw(map, size, x+1, y);
	} 
}