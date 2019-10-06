#include <stdio.h>
#include <string.h>

void hienThi(char s[100][20], int size);
void tachTu(char*);

void tachTu(char* s) {
	char res[100][20];
	int i = 0;
	char *p;
	const char *delim = " .,-\t\n";
	for(p = strtok(s, delim); p != NULL; p = strtok(NULL, delim)) {
		strcpy(res[i++], p);
	}
	hienThi(res, i);
}

void hienThi(char s[100][20], int size) {
	int i;
	for(i = size-1; i >= 0; i--) {
		printf("%s ", s[i]);
	}
}

int main(){
	char s[1000];
	fgets(s, 999, stdin);
	tachTu(s);
	return 0;
}

