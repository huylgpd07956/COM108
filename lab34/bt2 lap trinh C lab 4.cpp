#include<stdio.h>
//#incude <string.h>
int main(){
	char ten[20];
	float diem, dtb, toan, li, hoa;
	printf("Nhap vao ten cua hoc sinh: ");
	scanf("%s", &ten);
	printf("Nhap vao diem mon toan: ");
	scanf("%f", &toan);
	printf("Nhap vao diem mon li: ");
	scanf("%f", &li);
	printf("Nhap vao diem mon hoa: ");
	scanf("%f", &hoa);
	dtb = (toan + li + hoa) /3;
	if (dtb >= 9) {
		printf("Hoc sinh %s xep loai A", ten);
	}else if (dtb >= 7) {
		printf("Hoc sinh %s xep loai B", ten);
	}else if (dtb >=5 ) {
		printf("Hoc sinh %s xep loai C", ten);
	}else  {
		printf("Hoc sinh %s xep loai D", ten);
	}
}
