#include <stdio.h>
#include <string.h>
#define SIZE 101

void draw(char[][SIZE], int, int, int, int);
void mark(char[][SIZE], int, int, int, int);

int main()
{
	char map[SIZE][SIZE];
	int row, col;
	int counter = 1;
	while (scanf("%d%d", &row, &col) != EOF)
	{
		if (row == 0 && col == 0) break;
		int i, j;
		
		for (i = 0; i < row; i++)
			scanf("%s", map[i]);

		for (i = 0; i < row; i++)
			for (j = 0; j < col; j++)
				if (map[i][j] == '*')
					draw(map, row, col, i, j);
		
		for (i = 0; i < row; i++)
			for (j = 0; j < col; j++)
				if (map[i][j] == '.')
					map[i][j] = '0';
		
		
		printf("Field #%d:\n", counter);
		for (i = 0; i < row; i++)
			printf("%s\n", map[i]);
		counter++;
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