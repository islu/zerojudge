#include <stdio.h>
#include <string.h>
#define MAX 500

struct stack {
	char ary[MAX];
	int top;
};

typedef struct stack Stack;

void push(Stack*, char);
char pop(Stack*);
int empty(Stack);
int full(Stack);

int main() {
	char str[500];
	return 0;
}

void push(Stack *st, char c) {
	if (st->top < MAX) {
		st->ary[st->top] = c;
		st->top += 1;
	}
}

char pop(Stack *st) {
	if (st->top != 0) {
		char c = st->ary[st->top-1];
		st->top -= 1;
		st->ary[st->top] = '\0';
		return c;
	}
}

int empty(Stack st) {
	if (st.top == 0) return 1;
	else return 0;
}

int full(Stack st) {
	if (st.top == MAX) return 1;
	else return 0;
}