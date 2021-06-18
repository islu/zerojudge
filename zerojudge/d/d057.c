#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x1, y1, x2, y2;
	int moves = 0;
	while (scanf("%d%d%d%d", &x1, &y1, &x2, &y2) != EOF)
	{
		if (x1==0 && y1==0 && x2==0 && y2==0) break;
		if (x1==x2 && y1==y2) moves = 0;
		else if (x1!=x2 && y1==y2) moves = 1;
		else if (x1==x2 && y1!=y2) moves = 1;
		else if (abs(x1-x2) == abs(y1-y2)) moves = 1;
		else moves = 2;
		printf("%d\n", moves);
	}
	return 0;
}