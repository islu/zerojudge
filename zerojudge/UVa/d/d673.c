#include <stdio.h>

int main()
{
	int store[13];
	int ask[12];
	int i;
	int times = 1;
	int ready = 0;
	while (scanf("%d", &store[0]) == 1)
	{
		if (store[0] < 0) break;
		for (i = 1; i < 13; i++)
			scanf("%d", &store[i]);

		printf("Case %d:\n", times);
		for (i = 0; i < 12; i++) {
			scanf("%d", &ask[i]);
			ready += store[i];
			if (ready < ask[i]) printf("No problem. :(\n");
			else { 
				ready -= ask[i];
				printf("No problem! :D\n");
			}
		}
		ready = 0;
		times++;
	}
	return 0;
}