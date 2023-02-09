#include<stdio.h>
int main(){
	int a;
	printf("Ban nhap vao so:");
	scanf("%d",&a);
	// kiểm tra xem a chia hết cho 2 hay không
	if(a % 2 == 0)
	{
	printf("%d la so chan!", a);
		return 0;
	}
	printf("%d day la so le!", a);
	// kết thúc chương trình với giá trị trả về 0, cho biết chương trình đã chạy thành công
	return 0;
}
