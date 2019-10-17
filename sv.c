#include <stdio.h>
#include <stdlib.h>

struct SinhVien{
	float toan;
	float ly;
	float hoa;
	float tbc;
};

struct SinhVien nhapDiem() {
	struct SinhVien sv;
	printf("Nhap diem toan ly hoa: ");
	scanf("%f%f%f", &sv.toan, &sv.ly, &sv.hoa);
	sv.tbc = (sv.toan + sv.ly + sv.hoa) / 3;
	return sv;
}

void hienThi(struct SinhVien *s, int size) {
	int i;
	for(i = 0; i < size; i++) {
		printf("Diem TB sv %d: %0.2f\n", i, s[i].tbc);
	}
}

void menu(struct SinhVien* s, int size) {
	char choice;
	int i = 0;
	do {
		printf("==================================\n");
		printf("Nhap t de tiep tuc.\nNhap q de hien thi ket qua.\nNhap e de thoat.\n");
		fflush(stdin);
		choice = getchar();
		switch(choice) {
			case 't':
				if(i < size) {
					s[i]  = nhapDiem();
					i++;
				}
				break;
				
			case 'q':
				hienThi(s, i);
				break;
			
			case 'e':
				printf("Xin cam on!\n");
				break;
			
			default:
				printf("Nhap lai!\n");
				break;
		}
	} while(choice != 'e');
}

int main(){
	struct SinhVien *s;
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	s = (struct SinhVien *) malloc(n*sizeof(struct SinhVien));
	menu(s, n);
	return 0;
}

