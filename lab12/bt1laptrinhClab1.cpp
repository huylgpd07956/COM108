#include <stdio.h>
int main()
{
	// khai báo a, b kiểu số nguyên
	int a, b;
	// nhập a, b từ bàn phím
	printf("nhap a:");
	scanf("%d", &a);
	printf("nhap b:");
	scanf("%d", &b);
	// in ra kết quả
	printf("tong cua a va b la :%d \n", a + b);
	printf("hieu cua a va b la :%d \n", a - b);
	printf("tich cua a va b la :%d \n", a * b);
	// kết quả phép chia có thể là số thập phân nên ta phải ép kiểu cho a hoặc b kiểu số thự
	printf("thuong cua a va b la :%.2f \n", (float)a / b);

	return 0;
}
