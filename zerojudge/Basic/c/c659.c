#include <stdio.h>
#include <string.h>

int main() {
	char s[500];
	while (gets(s) != 0) {
		int i, j, len, index, flag;
		char con[50], val[50];

		len = strlen(s);
		index = 0;
		flag = 0;

		for (i = 0; i < len; i++) {
			if (s[i] == ' ') break;
			
			con[i] = s[i];
			con[i+1] = '\0';
		}

		for (i = strlen(con)+1; i < len; i++) {
			if (s[i] == ' ') {
				if (flag > 0) printf(" %s ", con);

				flag++;
				
				printf("%s", val);

				val[0] = '\0';
				index = 0;

				continue;
			}

			val[index] = s[i];
			val[index+1] = '\0';
			index++;

		}

		if (flag > 0) printf(" %s ", con);
		printf("%s\n", val);

	}
	return 0;
}