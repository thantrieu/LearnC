#include<stdio.h>
#include <string.h>
#include <stdlib.h>

struct Node {
	char key[40];
	char value[40];
	struct Node* left;
	struct Node* right;
};

struct Node* createNode(char* k, char* v) {
	struct Node* p = (struct Node*)malloc(sizeof(struct Node));
	if (p) {
		strcpy(p->key, k);
		strcpy(p->value, v);
		p->left = NULL;
		p->right = NULL;
		return p;
	}
	return NULL;
}

struct Node* insertNode(struct Node* root, char* k, char* v) {
	if (root == NULL) {
		return createNode(k, v);
	}
	if (strcmp(k, root->key) > 0) {
		root->right = insertNode(root->right, k, v);
	}
	else if (strcmp(k, root->key) < 0) {
		root->left = insertNode(root->left, k, v);
	}
	return root;
}

void LNR(struct Node* root) {
	if (root) {
		LNR(root->left);
		printf("%s : %s\n", root->key, root->value);
		LNR(root->right);
	}
}

struct Node* search(struct Node* root, char* key) {
	if (root) {
		if (strcmp(root->key, key) == 0) {
			return root;
		}
		else if (strcmp(key, root->key) < 0) {
			return search(root->left, key);
		}
		else {
			return search(root->right, key);
		}
	}
	return NULL;
}

void valueOf(struct Node* root, char* key) {
	struct Node* p = search(root, key);
	if (p) {
		printf("key: %s - value: %s\n", key, p->value);
	}
	else {
		printf("Invalid keyword! Please try again!");
	}
}

int main() {
	struct Node* root = NULL;
	root = insertNode(root, "1", "one");
	insertNode(root, "2", "two");
	insertNode(root, "3", "three");
	insertNode(root, "4", "four");
	insertNode(root, "5", "five");
	insertNode(root, "6", "six");

	//LNR(root);
	valueOf(root, "2"); // điền số 2 in ra two
	valueOf(root, "10");
	return 0;
}