#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// dem so lan xuat hien cua cac ki tu trong xau

struct Letter {
	char data;
	int appear;
};

bool isExist(char c, struct Letter* list, const int size) {
	int i;
	for(i = 0; i < size; i++) {
		if(c == list[i].data) {
			list[i].appear++;
			return true;
		}
	}
	return false;
}

void check(char *s, struct Letter* list, int *size) {
	int i;
	int len = strlen(s);
	char c;
	int counter = 0;
	for(i = 0; i < len; i++) {
		c = s[i];
		if(!isExist(c, list, counter)) {
			list[counter].data = c;
			list[counter].appear = 1;
			counter ++;
		}
	}
	*size = counter;
}

void showResult(struct Letter* list, const int size) {
	int i;
	for(i = 0; i < size; i++) {
		printf("%c : %d\n", list[i].data, list[i].appear);
	}
}

int main(){
	char s1[1000];
	fgets(s1, 999, stdin);
	int len = strlen(s1);
	if(len > 0) {
		s1[len - 1] = '\0';
	}
	int size = 0;
	struct Letter list[1000];
	
	check(s1, list, &size);
	showResult(list, size);
	
	return 0;
}
