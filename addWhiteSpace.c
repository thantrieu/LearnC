// them khoang trang vao sau dau cau

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

bool isWhiteSpace(char c) {
	return c == ' ' || c == '\t' || c == '\n';
}

bool specialCharacter(char c) {
	return c == ',' || c == '.' || c == '(' || c == ')' 
	|| c == '?' || c == ':' || c == ';' || c == '!';
}

void addWhiteSpace(char*, char *, int);
int countPos(char*);

int countPos(char* s) {
	int counter = 0;
	int i;
	int len = strlen(s);
	for(i = 0; i < len; i++) {
		if(specialCharacter(s[i]) && !specialCharacter(s[i + 1])
		&& !isWhiteSpace(s[i + 1])) {
			counter++;
		}
	}
	
	return counter;
}

void addWhiteSpace(char *s, char *res, int amount) {
	int i, j = 0;
	int len = strlen(s);
	for(i = 0; i < len; i++) {
		res[j++] = s[i];
		if(specialCharacter(s[i]) && !specialCharacter(s[i + 1])
		&& !isWhiteSpace(s[i + 1])) {
			res[j++] = ' ';
		}
	}
	res[len + amount] = '\0';
}

int main(){
	char s[100];
	fgets(s, 99, stdin);
	int num = countPos(s);
	int len = strlen(s);
	char *p = (char *) malloc(len + num + 1);
	addWhiteSpace(s, p, num);
	
	printf("%s", p);
	return 0;
}
