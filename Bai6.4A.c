#include <stdio.h>

struct HoTen {
	char ho[20];
	char dem[20];
	char ten[20];
};

struct DiemMH {
	float toan;
	float van;
	float anh;
	float tbc;
};

struct SinhVien {
	int ma;
	struct HoTen hoVaTen;
	int tuoi;
	char gioiTinh[10];
	struct DiemMH diem;
};



int main(){

	return 0;
}

