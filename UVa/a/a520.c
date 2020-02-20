#include <stdio.h>
#include <string.h>

int main()
{
	char str[2500];
	while (gets(str) != 0)
  {
    int i;
		int len = strlen(str);
    int ser = 0;
		int max = 0;
		int count = 0;
		for (i = 0; i < len; i++) {
			if(str[i] == ' ') ser++;
			else ser = 0;
			if (max < ser) max = ser;
		}
		while (max != 1) {
			max = max/2 + max%2;
			count++;
		}
		printf("%d\n", count);
	}
	return 0;
}
