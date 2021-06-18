#include <stdio.h>

int main()
{
	short T;
	short i, j;
	short N;
	short wall[50];
	
	scanf("%d", &T);
	for (i = 0; i < T; i++) {
		short high_jump =0;
		short low_jump = 0; 		
		scanf("%d", &N);
		for (j = 0; j < N; j++)
			scanf("%d", &wall[j]);
		
		for (j = 0; j < N-1; j++) {
			if (wall[j+1] > wall[j]) high_jump++;
			else if (wall[j+1] < wall[j]) low_jump++;
		}
		
		printf("Case %d: %d %d\n", i+1, high_jump, low_jump);

	}
	return 0;
}