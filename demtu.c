#include <stdio.h>
#include <stdbool.h>
#include <string.h>

struct Node {
	char data[50];
	int counter;
};

void addOrCount(char *word, struct Node *words, int *size) {
	int i;
	bool exist = false;
	for(i = 0; i < *size; i++) {
		if(strcmp(words[i].data, word) == 0) {
			words[i].counter++;
			exist = true;
			break;
		}
	}
	if(!exist) {
		strcpy(words[*size].data, word);
		words[*size].counter = 1;
		(*size)++;
	}
}

void splitWord(char *s, struct Node *words, int *size) {
	const char *delim = " \t.,?;:!\n";
	char *p;
	for(p = strtok(s, delim); p != NULL; p = strtok(NULL, delim)) {
		addOrCount(p, words, size);
	}
}

void showInfo(struct Node* words, int size) {
	int i = 0;
	while(i < size) {
		printf("%s: %d\n", words[i].data, words[i].counter);
		i++;
	}
}

int main(){
	char s[1000];
	int n = 0;
	fgets(s, 999, stdin);
	struct Node words[200];
	splitWord(s, words, &n);
	showInfo(words, n);
	return 0;
}

