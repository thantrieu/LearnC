#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int timViTri(char* str, int* length); // ham tim vi tri tu dai nhat trong xau
void hienThiTu(char *str, int pos, int length); // ham hien thi tu
bool khoangTrang(char c); // kiem tra ki tu co phai khoang trang hay khong

bool khoangTrang(char c) {
	return c == ' ' || c == '\t' || c == '\n';
}

void hienThiTu(char *str, int pos, int length) {
	printf("Tu dai nhat: \'");
	int i;
	for(i = pos; i < pos + length; i++) {
		printf("%c", str[i]);
	}
	printf("\'\nDo dai: %d\nVi tri cua tu: %d", length, pos);
}

int timViTri(char* str, int* length) {
	int len = 0;
	int lenMax = 0;
	int pos = 0;
	int posCurrent = 0;
	int size = strlen(str);
	int i;
	for(i = 0; i< size; i++) {
		if(!khoangTrang(str[i])) { //hello ..
			posCurrent = i - len;
			len++;
		} else {
			if(len > lenMax) {
				lenMax = len;
				pos = posCurrent;
			}
			len = 0;
		}
	}
	
	*length = lenMax;
	return pos;
}

int main(){
	char str[100];
	fgets(str, 99, stdin);
	int len = 0;
	int pos = timViTri(str, &len);
	hienThiTu(str, pos, len);
	return 0;
}

