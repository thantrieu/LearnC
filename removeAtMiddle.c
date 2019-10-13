// xoa tat ca cac khoang trang thua o giua xau

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isWhiteSpace(char c) {
	return c == ' ' || c == '\t' || c == '\n';
}

bool specialCharacter(char c) {
	return c == ',' || c == '.' || c == '(' || c == ')' 
	|| c == '?' || c == ':' || c == ';' || c == '!';
}

void removeAtMid(char*);

void removeAtMid(char *s) {
	int i, j;
	int len = strlen(s);
	for(i = 0; i < len; i++) {
		if(isWhiteSpace(s[i]) && isWhiteSpace(s[i + 1])) {
			for(j = i + 1; j < len; j++) {
				s[j] = s[j + 1];
			}
			i--;
			len--;
		} else if(isWhiteSpace(s[i]) && specialCharacter(s[i + 1])) {
			for(j = i; j < len; j++) {
				s[j] = s[j + 1];
			}
			i--;
			len--;
		} else if(s[i] == '\t') {
			s[i] = ' ';
		}
	}
}

int main(){
	char s[100];
	fgets(s, 99, stdin);
	removeAtMid(s);
	printf("%s", s);
	return 0;
}

