// xoa tat ca cac khoang trang o dau xau

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isWhiteSpace(char c) {
	return c == ' ' || c == '\t' || c == '\n';
}

void removeAtHead(char*);

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

int main(){
	char s[100];
	fgets(s, 99, stdin);
	removeAtHead(s);
	printf("%s", s);
	return 0;
}

