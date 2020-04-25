// BST
#include <stdio.h>
#include <stdlib.h>

struct node{
	struct node* left;
	struct node* right;
	int data;
};

typedef struct node Node;

void preorderTraversal(Node* p) {
	if (!p) return;
	printf("%d ", p -> data);
	preorderTraversal(p -> left);
	preorderTraversal(p -> right);
}

int main() {
	int N, i, M;
	Node *head, *current;
	while (scanf("%d", &N) != EOF) { 
	
		head = NULL;
		current = NULL;
		
		for (i = 0; i < N; i++) {
			
			scanf("%d", &M);

			if (head == NULL) {
				Node *root = (Node*)malloc(sizeof(Node));
				root -> data = M;
				root -> left = NULL;
				root -> right = NULL;
				head = root;
			}
			else {
				current = head;

				while (current != NULL) {
					if (M > current -> data) {
						if (current -> right == NULL) {
							Node *leaf = (Node*)malloc(sizeof(Node));
							leaf -> data = M;
							leaf -> left = NULL;
							leaf -> right = NULL;
							current -> right = leaf;
							current = NULL;
						}
						else {
							current = current -> right;
						}
					}
					else if (M < current -> data) {
						if (current -> left == NULL) {
							Node *leaf = (Node*)malloc(sizeof(Node));
							leaf -> data = M;
							leaf -> left = NULL;
							leaf -> right = NULL;
							current -> left = leaf;
							current = NULL;		
						}
						else {
							current = current -> left;
						}
					}
					else {
						current = NULL;
					}
				}
			}
		}

		preorderTraversal(head);
		printf("\n");
	}
	return 0;
}