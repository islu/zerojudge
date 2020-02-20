#include <stdio.h>
#include <string.h>

int main()
{
	int n;
	while (scanf("%d", &n) != EOF)
  {
    int i, j;

		for (i = 0; i < n; i++) {
      char num[6];
      scanf("%s", num);
			int len = strlen(num);
      int count_one = 0;
    	int count_two = 0;
      if (len == 5) printf("3\n");
			else {
				if (num[0] == 'o') count_one++;
				if (num[0] == 't') count_two++;
				if (num[1] == 'n') count_one++;
				if (num[1] == 'w') count_two++;
				if (num[2] == 'e') count_one++;
				if (num[2] == 'o') count_two++;
			}
			if (count_one >= 2) printf("1\n");
			else if (count_two >= 2) printf("2\n");

		}
	}
	return 0;
}
