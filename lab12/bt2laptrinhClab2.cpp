#include <stdio.h>
int main()
{
	// 3.14 và 4 là giá trị không đổi nên ta dùng hàm  const
	const float PI = 3.14;
	const int b = 4;
	int a;
	// printf để in ra chuỗi ký tự và scanf để nhập từ bàn phím
	printf("nhap a:");
	scanf("%d", &a);
	// PI là số thực nên ta khai báo St kiểu float
	float St = a * a * PI;
	// nhập a vào là số nguyên nên kết quả in ra diện tích hình vuông luôn là số nguyên ta khai báo Sv kiểu số nguyên
	int SV = a * a;
	// S tam giác cân = 1/4 diện tích hình vuông, kết quả có thể là số thực (vd: khi a = 1) nên ta khai báo Stg kiểu số thực và tiến hành ép kiểu cho Sv
	float Stg = (float)SV / b;
	// chúng ta tiến hành in ra màn hình kết quả, với float chúng ta dùng %.2f để kết quả số thực in ra đằng sau dấu chấm có 2 số. Với hình vuông thì khai báo số nguyên kết quả đương nhiên là số nguyên nên ta dùng %d
	printf("Dien tich hinh tron la : %.2f \n", St);
	printf("Dien tich hinh vuong la : %d \n", SV);
	printf("Dien tich hinh tam giac can la : %.2f ", Stg);
	// kết thúc chương trình với giá trị trả về 0, cho biết chương trình đã chạy thành công
	return 0;
}
