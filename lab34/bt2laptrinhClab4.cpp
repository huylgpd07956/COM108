#include <stdio.h>
// #incude <string.h>
int main()
{
	// Khai báo mảng kí tự name để lưu tên học sinh
	char ten[20];
	// Khai báo biến toan, ly, hoa, dtb để lưu điểm toán, lý, hóa, dtb
	float diem, dtb, toan, li, hoa;
	// Yêu cầu người dùng nhập tên học sinh
	printf("Nhap vao ten cua hoc sinh: ");
	scanf("%s", &ten);
	// Yêu cầu người nhập điểm toán
	printf("Nhap vao diem mon toan: ");
	scanf("%f", &toan);
	// Yêu cầu người nhập điểm lí
	printf("Nhap vao diem mon li: ");
	scanf("%f", &li);
	// Yêu cầu người nhập điểm hóa
	printf("Nhap vao diem mon hoa: ");
	scanf("%f", &hoa);
	// Tính điểm trung bình
	dtb = (toan + li + hoa) / 3;
	if (dtb >= 9)
	{
		printf("Hoc sinh %s xep loai A", ten);
	}
	else if (dtb >= 7)
	{
		printf("Hoc sinh %s xep loai B", ten);
	}
	else if (dtb >= 5)
	{
		printf("Hoc sinh %s xep loai C", ten);
	}
	else
	{
		printf("Hoc sinh %s xep loai D", ten);
	}
	// kết thúc chương trình với giá trị trả về 0, cho biết chương trình đã chạy thành công
	return 0;
}
