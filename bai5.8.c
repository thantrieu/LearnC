#include <stdio.h>
#include <string.h>

int dauCachDau(char* s) { // tim dau cach dau tien
	int len = strlen(s);
	int i;
	for(i = 0; i < len; i++) {
		if(s[i] == ' ') {
			return i;
		}
	}
	return -1;
}

int dauCachCuoi(char* s) { // tim dau cach cuoi cung
	int len = strlen(s);
	int i;
	for(i = len - 1; i >= 0; i--) {
		if(s[i] == ' ') {
			return i;
		}
	}
	return -1;
}

void hienThi(char *s) { // hien thi ket qua ra man hinh
	int first = dauCachDau(s);
	int last = dauCachCuoi(s);
	int i;
	int len = strlen(s);
	if(first != -1 && last != -1) {
		// in ten
		for(i = last + 1; i < len - 1; i++) {
			printf("%c", s[i]);
		}
		// in dem
		for(i = first; i <= last; i++) {
			printf("%c", s[i]);
		}
		// in ra ho
		for(i = 0; i < first; i++) {
			printf("%c", s[i]);
		}
	} else {
		printf("Nhap dung dinh dang: ho dem ten");
	}
}

int main(){
	char s[100];
	fgets(s, 99, stdin);
	hienThi(s);
	return 0;
}
