#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void tongHaiSo()
{
    int a, b;
    printf("Nhap a: ");
    scanf("%d", &a);
    printf("Nhap b: ");
    scanf("%d", &b);
    printf("Tong cua %d + %d = %d \n", a, b, a + b);
}

void giaiPhuongTrinhBac2()
{
    int a, b, c;
    printf("Nhap a: ");
    scanf("%d", &a);
    printf("Nhap b: ");
    scanf("%d", &b);
    printf("Nhap c: ");
    scanf("%d", &c);
    float delta = (float)b * b - 4 * a * c;
    if (delta < 0)
    {
        printf("Phuong trinh vo nghiem!\n");
    }
    else if (delta == 0)
    {
        printf("x1 = x2 = %2.f\n", (float)(-b) / (2 * a));
    }
    else
    {
        printf("Phuong trinh co hai nghiem phan biet:\n");
        printf("x1 = %2.f \n", ((float)-b + sqrt(delta)) / (2 * a));
        printf("x2 = %2.f \n", ((float)-b - sqrt(delta)) / (2 * a));
    }
}

void menu()
{
    int chon;
    printf("-----MENU-----\n");
    printf("1. Nhap so nguyen in ra tong 2 so.\n");
    printf("2. Giai phuong trinh bac 2\n");
    printf("0. Thoat\n");
    printf("Vui long chon chuong trinh: ");
    scanf("%d", &chon);
    printf("--------------\n");
    switch (chon)
    {
    case 1:
        tongHaiSo();
        break;
    case 2:
        giaiPhuongTrinhBac2();
        break;
    case 0:
        exit(0);
    default:
        printf("Vui long chon 1 trong 2 chuong trinh tren: \n");
    }
}

int main()
{
    while (1)
    {
        menu();
    }

    return 0;
}
