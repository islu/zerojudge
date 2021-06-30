#include <stdio.h>
#include <string.h>


char str[10000001];
int main() 
{	
	int n;
	while(scanf("%d", &n)!= EOF) 
	{
		int j;
		for(j=0;j<n;j++) 
		{
			scanf("%s", str);
			int couter = 0;
			int top = 0;
			int i;
			int len = strlen(str);
		
			for(i=0;i<len;i++) 
			{
				if(str[i] == 'p')
				{
					top++;
				}
				else if(str[i] == 'q' && top != 0) 
				{
					couter++;
					top--;
				}
			}
		
			printf("%d\n", couter);
		}
	}
	return 0;
}
