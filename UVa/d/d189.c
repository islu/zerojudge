#include<stdio.h>

int main()
{
	int cola;
	while (scanf("%d", &cola) !=EOF)
	{
		printf("%d\n",cola/2+cola);
	}
	return 0;
}