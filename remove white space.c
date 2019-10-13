#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

bool isWhiteSpace(char c) {
	return c == '\t' || c == ' ' || c == '\n';
}

bool specialCharacter(char c) {
	return c == ',' || c == '.' || c == '(' || c == ')' 
	|| c == '?' || c == ':' || c == ';' || c == '!';
}

void removeTail(char *s) {
	int i = strlen(s) - 1;
	while(s[i] == ' ' || s[i] == '\t' || s[i] == '\n') {
		s[i] = '\0';
	}
}

void removeHead(char *s) {
	int counter = 0;
	int i = 0;
	while(s[i] ==' ' || s[i] == '\t') {
		counter++;
		i++;
	}
	
	int len = strlen(s);
	for(i = 0; i <= len - counter; i++) {
		s[i] = s[i + counter];
	}
}

void removeMiddle(char *s) {
	int len = strlen(s);
	int i, j;
	for(i = 0; i < len; i++) {
		if(isWhiteSpace(s[i]) && isWhiteSpace(s[i + 1])) {
			for(j = i + 1; j < len; j++) {
				s[j] = s[j + 1];
			}
			len --;
			i--;
		} else if(isWhiteSpace(s[i]) && specialCharacter(s[i + 1])) {
			for(j = i; j < len; j++) {
				s[j] = s[j + 1];
			}
			len--;
			i--;
		}
	}
}

bool capitalSignal(char c) {
	return c == '.' || c == '!' || c == '?';
}

void capitalize(char* s) {
	int i;
	int len = strlen(s);
	if(len > 0) {
		s[0] = toupper(s[0]);
	}
	for(i = 0; i < len; i++) {
		if(capitalSignal(s[i])) {
			s[i + 2] = toupper(s[i + 2]);
		}
	}
}

int countSpecial(char *s) {
	int counter = 0;
	int i;
	int len = strlen(s);
	for(i = 0; i < len; i++) {
		if(specialCharacter(s[i]) && !isWhiteSpace(s[i+1]) 
		&& !specialCharacter(s[i + 1])) {
			counter++;
		}
	}
	return counter;
}

void addSpace(char* s, char *p, int counter) {
	int i;
	int len = strlen(s);
	int j = 0;
	
	for(i = 0; i < len; i++) {
		if(specialCharacter(s[i]) && !isWhiteSpace(s[i+1])
		&& !specialCharacter(s[i + 1])) {
			p[j++] = s[i];
			p[j++] = ' ';
		} else {
			p[j++] = s[i];
		}
	}
	
	p[len + counter] = '\0';
}

int main(){
	char s[100];
	fgets(s, 99, stdin);
	removeTail(s);
	removeHead(s);
	removeMiddle(s);
	char *p;
	int counter = countSpecial(s);
	p = (char*) malloc(strlen(s) + counter + 1);
	addSpace(s, p, counter);
	capitalize(p);
	printf("%s", p);
	return 0;
}
