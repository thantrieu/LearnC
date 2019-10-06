#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int countOccurent(char *s, char *s1) {
	int count = 0;
	int i;
	for(i = 0; s[i] != '\0'; i++) {
		if(strstr(&s[i], s1) == &s[i]) {
			count++;
		}
	}
	return count;
}

void replace(char *s, char *s1, char* s2) {
	int occur = countOccurent(s, s1); // s1 xuat hien bao nhieu lan trong s
	int lenS1 = strlen(s1);
	int lenS2 = strlen(s2);
	int len = strlen(s);
	
	char* res = (char *) malloc(len + occur * (lenS2 - lenS1) + 1);
	int i = 0, j = 0;
	for(i = 0; s[i] != '\0'; ) {
		if(strstr(&s[i], s1) == &s[i]) {
			strcpy(&res[j], s2);
			i += lenS1;
			j += lenS2;
		} else {
			res[j++] = s[i++];
		}
	}
	res[j] = '\0';
	puts(res);
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
	char des[100];
	fgets(des, 99, stdin);
	int newLen = strlen(des);
	if(newLen > 0) {
		des[newLen-1] = '\0';
	}
	
	replace(input, token, des);
	return 0;
}

