#include <stdio.h>
#include <string.h>
#define SIZE 101
#define ROW 16
#define COL 31

void draw(char[][SIZE], int, int, int, int);
void mark(char[][SIZE], int, int, int, int);

int main()
{
	char map[SIZE][SIZE];
	while (scanf("%s", map[0]) != EOF)
	{
		int i, j;
		
		for (i = 1; i < ROW; i++)
			scanf("%s", map[i]);

		for (i = 0; i < ROW; i++)
			for (j = 0; j < COL; j++)
				if (map[i][j] == '*')
					draw(map, ROW, COL, i, j);

		for (i = 0; i < ROW; i++)
			printf("%s\n", map[i]);
	}
	return 0;
}

void draw(char map[][SIZE], int row, int col, int x, int y) 
{
	mark(map, row, col, x-1, y-1);
	mark(map, row, col, x, y-1);
	mark(map, row, col, x+1, y-1);
	mark(map, row, col, x-1, y);
	mark(map, row, col, x+1, y);
	mark(map, row, col, x-1, y+1);
	mark(map, row, col, x, y+1);
	mark(map, row, col, x+1, y+1);
}

void mark(char map[][SIZE], int row, int col, int x, int y) 
{
	if (x < 0 || y < 0 || x >= row || y >= col) {}
	else if (map[x][y] == '.')
		map[x][y] = '1';
	else if ('1' <= map[x][y] && map[x][y] <= '9')
		map[x][y] += 1;
}
