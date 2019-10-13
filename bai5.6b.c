// 	chuan hoa xau ki tu
/*
	* xoa cac ki tu khoang trang thua o cuoi xau
	* xoa ki tu khoang trang thua o dau xau
	* xoa ki tu khoang trang thua o giua xau
	* them dau cach vao sau dau cau
	* viet hoa ki tu dau cau va sau cac dau cau thich hop
*/

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

bool capitalSignal(char c) {
	return c == '.' || c == '!' || c == '?';
}

void addWhiteSpace(char*, char *, int);
int countPos(char*);
void removeAtTail(char*);
void removeAtHead(char*);
void removeAtMid(char*);

void removeAtTail(char *s) {
	int len = strlen(s);
	int i = len-1;
	while(isWhiteSpace(s[i])) {
		s[i] = '\0';
		i--;
	}
}

void removeAtHead(char *s) {
	int counter = 0;
	int i;
	int len = strlen(s);
	// dem xem co tat ca bao nhieu khoang trang
	for(i = 0; i < len; i++) {
		if(isWhiteSpace(s[i])) {
			counter++;
		} else {
			break;
		}
	}
	// xoa khoang trang
	for(i = 0; i <= len - counter; i++) {
		s[i] = s[i + counter];
	}
}

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

void capitalize(char* s) {
	int i;
	int len = strlen(s);
	if(len > 0) {
		s[i] = toupper(s[i]);
	}
	for(i = 0; i < len; i++) {
		if(capitalSignal(s[i])) {
			s[i + 2] = toupper(s[i + 2]);
		}
	}
	// hello. world!
}

int main(){
	char s[1000];
	fgets(s, 999, stdin);
	removeAtTail(s);
	removeAtHead(s);
	removeAtMid(s);
	int num = countPos(s);
	int len = strlen(s);
	char *p = (char *) malloc(len + num + 1);
	addWhiteSpace(s, p, num);
	capitalize(p);
	printf("%s", p);
	return 0;
}
