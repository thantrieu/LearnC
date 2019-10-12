#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct Node {
	char data[50];
	int counter;
};

void themHoacDem(char *word, struct Node *words, int *size) {
	int i;
	bool tonTai = false;
	for(i = 0; i < *size; i++) {
		if(strcmp(word, words[i].data) == 0) {
			words[i].counter++;
			tonTai = true;
			break;
		}
	}
	if(!tonTai) {
		strcpy(words[*size].data, word);
		words[*size].counter = 1;
		(*size) ++;
	}
}

void tachVaDem(char *s, struct Node *words, int *size) {
	char *p;
	const char* delim = " \t\n,.?!;:";
	for(p = strtok(s, delim); p != NULL; p = strtok(NULL, delim)) {
		themHoacDem(p, words, size);
	}
}

void hienThi(struct Node* words, int size) {
	int i;
	for(i = 0; i < size; i++) {
		printf("%s : %d\n", words[i].data, words[i].counter);
	}
}

int main(){
	char s[1000];
	fgets(s, 999, stdin);
	struct Node words[200];
	int size = 0;
	
	tachVaDem(s, words, &size);
	hienThi(words, size);
	
	return 0;
}

