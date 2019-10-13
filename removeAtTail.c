// xoa tat ca cac khoang trang o cuoi xau

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isWhiteSpace(char c) {
	return c == ' ' || c == '\t' || c == '\n';
}

void removeAtTail(char*);

void removeAtTail(char *s) {
	int len = strlen(s);
	int i = len-1;
	while(isWhiteSpace(s[i])) {
		s[i] = '\0';
		i--;
	}
}

int main(){
	char s[100];
	fgets(s, 99, stdin);
	int first = strlen(s);
	removeAtTail(s);
	int last = strlen(s);
	printf("%d - %d", first, last);
	return 0;
}

