#include<stdio.h>
int main(){
	const float PI = 3.14;
	const int b = 4;
	int a;
	printf("nhap a:");
	scanf("%d",&a);
	float St = a * a * PI;
	int SV = a * a;
	float Stg = (float) SV / b;
	printf("Dien tich hinh tron la : %.2f \n",St);
	printf("Dien tich hinh vuong la : %d \n",SV);
	printf("Dien tich hinh tam giac can la : %.2f ",Stg);
	return 0;
	
}

