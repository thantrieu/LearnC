#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void doAction(char *src, int pos, int len) {
	int i;
	int size = strlen(src);
	for(i = pos; i <= size - len; i++) {
		src[i] = src[i + len];
	}
}

void removeStr(char *src, char *token) {
	int i;
	int len = strlen(token);
	for(i = 0; src[i] != '\0'; i++) {
		if(strstr(&src[i], token) == &src[i]) {
			doAction(src, i, len);
			i --;
		}
	}
}

int main(){
	char input[1000];
	char token[100];
	fgets(input, 999, stdin);
	fgets(token, 99, stdin);
	
	int len = strlen(token);
	if(len > 0) {
		token[len-1] = '\0';
	}
	
	int size = strlen(input);
	if(size > 0) {
		input[size-1] = '\0';
	}
	
	removeStr(input, token);
	puts(input);
	
	return 0;
}

