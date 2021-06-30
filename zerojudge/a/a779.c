#include <stdio.h>
#include <string.h>

int testChar(char* c) 
{
	if('A'<=*c && *c<= 'Z') 
	{
		*c += 32;
		return 0;
	}	
	else if('a'<=*c && *c<= 'z') 
		return 0;
	else if('0'<=*c && *c<= '9')
		return 0;
	else
		return 1;
}

int main() 
{	
	char str[10000];
	while(gets(str)!= 0) 
	{
		printf("%s\n", str);
		
		int tail = strlen(str) - 1;
		int head = 0;
		int fail = 0;
		int tag = 0;
		int h = 0;
		int t = 0;
		
		while(head <= tail && fail == 0)
		{
			h = testChar(&str[head]);
			t = testChar(&str[tail]);
			
			if(h == 0 && t == 0 )
			{
				if(str[head] == str[tail]) 
				{
					head++;
					tail--;
					tag++;
				}
				else	fail++;	
			}
			
			if(h == 1)	head++;
			
			if(t == 1)	tail--;

		}
		
		if(tag == 0 && (h == 1 || t == 1))	fail++;
		
		if(fail)
			printf("-- is not a palindrome\n");
		else
			printf("-- is a palindrome\n");
	}
	return 0;
}
