#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool nguyenAm(char);
bool phuAm(char);
bool kiTuSo(char);
void count(char*, int*, int*, int*, int*);

bool nguyenAm(char c) {
	return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

bool phuAm(char c) {
	if(!nguyenAm(c) && c >= 'a' && c <= 'z') {
		return true;
	}
	return false;
}

bool kiTuSo(char c) {
    return c >= '0' && c <= '9';
}

void count(char* s, int* demP, int* demN, int* demS, int* demK) {
	int len = strlen(s);
	int i;
	for(i = 0; i < len; i++) {
		char c = tolower(s[i]);
		if(nguyenAm(c)) {
			(*demN)++;
		} else if(phuAm(c)) {
			(*demP)++;
		} else if(kiTuSo(c)) {
			(*demS)++;
		} else {
			(*demK)++;
		}
	}
}

int main(){
	char s[100];
	fgets(s, 99, stdin);
	int demP = 0, demN = 0, demS = 0, demK = 0;
	count(s, &demP, &demN, &demS, &demK);
	printf("So ki tu nguyen am: %d, \nPhu am: %d,\nKi tu so: %d,\nKi tu khac: %d",
	 demN, demP, demS, demK);
	return 0;
}

