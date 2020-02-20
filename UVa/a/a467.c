#include <stdio.h>
#include <string.h>

int main()
{
	char base_one[50];
	int ans[200] = {0};
	int len;
	int flag;
	int i;
	int top = 0;
	while (scanf("%s", base_one) != EOF && base_one[0] != '~')
  {
		if (base_one[0] == '#') {
			int sum = 0;
			int product = 1;
			for (i = 0; i < top-1; i++)
				product *= 2;

			for (i = 0; i < top; i++) {
				sum += ans[i] * product;
				product /= 2;
			}
			printf("%d\n", sum);
			top = 0;
			continue;
		}
		len = strlen(base_one);
		if (len == 1) flag = 1;
		else if (len == 2) flag = 0;
		else {
			for (i = 0; i < len-2; i++) {
				ans[top] = flag;
				top++;
			}
		}
	}
	return 0;
}
