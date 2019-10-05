#include <stdio.h>
#include <string.h>

int viTriDau(char *s) {
	int i;
	int len = strlen(s);
	for(i = 0; i < len; i++) {
		if(s[i] == ' ') {
			return i;
		}
	}
	return -1;
}

int viTriCuoi(char* s) {
	int i;
	int len = strlen(s);
	for(i = len-1; i >= 0; i--) {
		if(s[i] == ' ') {
			return i;
		}
	}
	return -1;
}

void hienThi(char *s) {
	int first = viTriDau(s);
	int last = viTriCuoi(s);
	int i;
	int len = strlen(s);
	for(i = last+1; i < len-1; i++) {
		printf("%c", s[i]);
	}
	printf(" ");
	for(i = first+1; i < last; i++) {
		printf("%c", s[i]);
	}
	printf(" ");
	for(i = 0; i < first; i++) {
		printf("%c", s[i]);
	}
}

int main(){
	char s[100];
	fgets(s, 99, stdin);
	hienThi(s);
	return 0;
}

