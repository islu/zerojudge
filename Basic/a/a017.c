#include <stdio.h>
#include <string.h>

int priority(char);

int main()
{
	char s[1000];
	while (gets(s) != 0)
	{
		int output_stack[1000] = {0};
		int op_stack[1000] = {0};
		long long ans_stack[1000] = {0};
		int len, i, j, number, op_top, output_top, top;
		long long ans;
		len = strlen(s);
		number = 0;
		op_top = 0;
		output_top = 0;
		ans = 0;
		top = 0;
		for (i = 0; i < len; i++) {
			if ('0' <= s[i] && s[i] <= '9') {
				number = number*10 + s[i]-'0';
			}
			else if (number != 0 && s[i] == ' ') {
				output_stack[output_top] = number;
				output_top++;
				number = 0;
			}
			else {
				switch (s[i]) {
					case '(':
						op_stack[op_top] = s[i];
						op_top++;
						break;
					case '+': case '-': case '*': case '/': case '%':
						while (priority(op_stack[op_top-1]) >= priority(s[i])) {
							output_stack[output_top] = op_stack[op_top-1];
							op_top--;
							output_top++;
						}
						op_stack[op_top] = s[i];
						op_top++;
						break;
					case ')':
						while(op_stack[op_top-1] != '(') {
							output_stack[output_top] = op_stack[op_top-1];
							op_top--;
							output_top++;
						}
						op_top--;
						break;
				}
			}
		}
		if (number != 0) {
				output_stack[output_top] = number;
				output_top++;
			}
			while (op_top != 0) {
				output_stack[output_top] = op_stack[op_top-1];
				op_top--;
				output_top++;
			}
		for (i = 0; i < output_top; i++) {
			switch(output_stack[i]) {
				case '+':
					ans = ans_stack[top-2] + ans_stack[top-1];
					ans_stack[top-2] = ans;
					top--;
					break;
				case '-':
					ans = ans_stack[top-2] - ans_stack[top-1];
					ans_stack[top-2] = ans;
					top--;
					break;
				case '*':
					ans = ans_stack[top-2] * ans_stack[top-1];
					ans_stack[top-2] = ans;
					top--;
					break;
				case '/':
					ans = ans_stack[top-2] / ans_stack[top-1];
					ans_stack[top-2] = ans;
					top--;
					break;
				case '%':
					ans = ans_stack[top-2] % ans_stack[top-1];
					ans_stack[top-2] = ans;
					top--;
					break;
				default:
					ans_stack[top] = output_stack[i];
					top++;
					break;
			}
		}
		printf("%lld\n", ans);
	}
	return 0;
}

int priority(char op) {
	switch(op) {
		case '+': case '-': 		  		return 1;
		case '*': case '/': case '%': return 2;
		default: 					  					return 0;
	}
}