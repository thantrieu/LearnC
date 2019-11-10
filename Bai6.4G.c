#include <stdio.h>
#include <string.h>

struct SinhVien;
void hienThiDSSV(struct SinhVien*, int);
void hienThiTenCot();

struct HoTen {
	char ho[20];
	char dem[21];
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

void nhapDiem(struct DiemMH* diem) {
	printf("Toan: ");
	scanf("%f", &diem->toan);
	printf("Van: ");
	scanf("%f", &diem->van);
	printf("Anh: ");
	scanf("%f", &diem->anh);
	diem->tbc = (diem->toan + diem->van + diem->anh) / 3;
}

void nhapHoTen(struct HoTen* ten) {
	printf("Ho: ");
	scanf("%s", ten->ho);
	printf("Dem: ");
	getchar();
	gets(ten->dem);
	printf("Ten: ");
	scanf("%s", ten->ten);
}

struct SinhVien nhapSV() {
	struct SinhVien sv;
	printf("Nhap ma: ");
	scanf("%d", &sv.ma);
	nhapHoTen(&sv.hoVaTen);
	printf("Tuoi: ");
	scanf("%d", &sv.tuoi);
	printf("Gioi tinh: ");
	scanf("%s", sv.gioiTinh);
	nhapDiem(&sv.diem);
	return sv;
}

void hienThiTTSV(struct SinhVien sv) {
	printf("%-10d %-10s %-20s %-10s %-10d %-10s %-10.2f %-10.2f %-10.2f %-10.2f\n",
	sv.ma, sv.hoVaTen.ho, sv.hoVaTen.dem, sv.hoVaTen.ten, sv.tuoi, sv.gioiTinh,
	sv.diem.toan, sv.diem.van, sv.diem.anh, sv.diem.tbc);
}

void sapXepTheoTen(struct SinhVien* ds, int slsv) {
	int i, j;
	for(i = 0; i < slsv - 1; i++) {
		for(j = slsv - 1; j > i; j --) {
			if(strcmp(ds[j].hoVaTen.ten, ds[j-1].hoVaTen.ten) < 0) {
				struct SinhVien sv = ds[j];
				ds[j] = ds[j - 1];
				ds[j - 1] = sv;
			}
		}
	}
}

void sapXepTheoDiem(struct SinhVien* ds, int slsv) {
	int i, j;
	for(i = 0; i < slsv - 1; i++) {
		for(j = slsv - 1; j > i; j --) {
			if(ds[j].diem.tbc > ds[j - 1].diem.tbc) {
				struct SinhVien sv = ds[j];
				ds[j] = ds[j - 1];
				ds[j - 1] = sv;
			}
		}
	}
}

void timTheoTen(struct SinhVien* ds, int slsv) {
	char ten[20];
	printf("Nhap ten: ");
	scanf("%s", ten);
	hienThiTenCot();
	int i, timSV = 0;
	for(i = 0; i < slsv; i++) {
		if(strcmp(ten, ds[i].hoVaTen.ten) == 0) {
			hienThiTTSV(ds[i]);
			timSV = 1;
		}
	}
	if(timSV == 0) {
		printf("Khong co sinh vien %s trong danh sach!\n", ten);
	}
}

void ghiFile(struct SinhVien* ds, int slsv) {
	getchar();
	char fName[26];
	printf("Nhap ten file: ");
	gets(fName);
	FILE* fOut = fopen(fName, "a");
	int i;
	for(i = 0; i < slsv; i++) {
		struct SinhVien sv = ds[i];
		fprintf(fOut, "%-10d %-10s %-20s %-10s %-10d %-10s %-10.2f %-10.2f %-10.2f %-10.2f\n",
		sv.ma, sv.hoVaTen.ho, sv.hoVaTen.dem, sv.hoVaTen.ten, sv.tuoi, sv.gioiTinh,
		sv.diem.toan, sv.diem.van, sv.diem.anh, sv.diem.tbc);
	}
	fclose(fOut);
}

void docFile(struct SinhVien* ds, int* slsv) {
	FILE* fOut = fopen("SV.txt", "r");
	int i = 0;
	if(fOut) {
		for(;;) {
			struct SinhVien sv;
			fscanf(fOut, "%10d %10s %20[^\n] %10s %10d %10s %10f %10f %10f %10f\n",
			&sv.ma, sv.hoVaTen.ho, sv.hoVaTen.dem, sv.hoVaTen.ten, &sv.tuoi, sv.gioiTinh,
			&sv.diem.toan, &sv.diem.van, &sv.diem.anh, &sv.diem.tbc);
			
			ds[i++] = sv;
			if(feof(fOut)) { // thoat chuong trinh
				break;
			}
		}
	}
	
	fclose(fOut);
	*slsv = i;
}

void hienThiTenCot() {
	printf("-----------------------------------------------------"
	"----------------------------------------------------------------\n");
	printf("%-10s %-10s %-20s %-10s %-10s %-10s %-10s %-10s %-10s %-10s\n", 
		"Ma SV", "Ho", "Dem", "Ten", "Tuoi", "Gioi Tinh", 
		"Diem Toan", "Diem Van", "Diem Anh", "Diem TBC");
}

void hienThiDSSV(struct SinhVien* ds, int slsv) {
	hienThiTenCot();
	int i;
	for(i = 0; i < slsv; i++) {
		hienThiTTSV(ds[i]);
	}
	printf("-----------------------------------------------------"
	"----------------------------------------------------------------\n");
}

int main() {
	struct SinhVien dssv[100];
	int slsv = 0;
	int luaChon;
	
	docFile(dssv, &slsv);
	printf("DANH SACH SINH VIEN HIEN THOI:\n");
	hienThiDSSV(dssv, slsv);
	int i;
				
	do {
		printf("=============== MENU ===============");
		printf("\n1. Them Sinh vien vao danh sach.");
		printf("\n2. Hien thi danh sach sinh vien.");
		printf("\n3. Sap xep theo ten.");
		printf("\n4. Sap xep theo diem giam dan.");
		printf("\n5. Tim sinh vien theo ten.");
		printf("\n6. Ghi thong tin sinh vien ra file.");
		printf("\n0. Thoat chuong trinh.");
		printf("\nBan chon ? ");
		
		scanf("%d", &luaChon);
		struct SinhVien sv;
		
		switch(luaChon) {
			case 0:
				break;
				
			case 1:
				sv = nhapSV();
				dssv[slsv++] = sv;
				break;
				
			case 2:
				hienThiDSSV(dssv, slsv);
				break;
				
			case 3:
				sapXepTheoTen(dssv, slsv);
				printf("\nDanh sach sinh vien sau khi sap xep theo ten a-z:\n");
				hienThiDSSV(dssv, slsv);
				break;
				
			case 4:
				sapXepTheoDiem(dssv, slsv);
				printf("\nDanh sach sinh vien sau khi sap xep theo diem giam dan:\n");
				hienThiDSSV(dssv, slsv);
				break;
				
			case 5:
				timTheoTen(dssv, slsv);
				break;
				
			case 6:
				ghiFile(dssv, slsv);
				break;
				
			default:
				printf("Sai chuc nang, vui long chon lai!\n");
				break;
		}
		
	} while(luaChon);
	
	return 0;
}

// link hoc tap: https://youtu.be/EYMgZHOTdAM
