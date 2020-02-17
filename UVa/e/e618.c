#include <stdio.h>
#define SIZE 2020

struct Store {
	int code;
	int times;
};

int main()
{
	int num;
	int counter = 0;
	int i;
	struct Store s[SIZE];
	while (scanf("%d", &num) != EOF)
	{
		int flag = 0;
		for (i = 0; i < counter; i++) {
			if (s[i].code == num) {
				s[i].times++;
				flag = 1;
				break;
			}
		}
		if (flag == 1) continue;
		else if (flag == 0) {
			s[counter].code = num;
			s[counter].times = 1;
			counter++;
		}
	}
	
	for (i = 0; i < counter; i++)
		printf("%d %d\n", s[i].code, s[i].times);
	
	return 0;
}