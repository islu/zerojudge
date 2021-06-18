// partice sscanf & scanf
#include <stdio.h>

int decode_op(char);
int homework_checker(int, char, int, int);

int main()
{
	int a, b, c;
	char op, buffer[10];
	int result = 0;
	while (scanf("%d%c%d=%s", &a, &op, &b, buffer) != EOF)
	{	
		if (buffer[0] != '?') {
			sscanf(buffer, "%d", &c);
			int currect = homework_checker(a, op, b, c);
			if (currect == 1) result += 1;
		}
	}
	
	printf("%d\n", result);
	
	return 0;
}

int decode_op(char op) {
	if (op == '+') return 1;
	else if (op == '-') return 0;
	return -1;
}

int homework_checker(int a, char op, int b, int c) {
	int dOp = decode_op(op);
	if (dOp == 1) {
		if (c == a + b) return 1;
		else return 0;
	}
	else if (dOp == 0) {
		if (c == a - b) return 1;
		else return 0;
	}
	else printf("error! can't decode op");
	
	return -1;
}
