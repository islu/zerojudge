#include <stdio.h>

int main()
{
	int h1, m1, h2, m2;
	while (scanf("%d%d%d%d", &h1, &m1, &h2, &m2) != EOF)
	{
		int rest_time = 0;
		if (h1 == 0 & m1 == 0 & h2 == 0 & m2 == 0) break;
		if (h2 > h1) rest_time = (h2-h1)*60 + m2 - m1;
		else if (h2 < h1) rest_time = (24+h2-h1)*60 + m2 - m1;
		else if (h2 == h2) rest_time = m2 >= m1 ? m2 - m1 : 24*60 + m2 - m1;
		
		printf("%d\n", rest_time);

	}
	return 0;
}