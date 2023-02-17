#include<stdio.h> 
#include<stdlib.h>
void menu(){
		int choice;
		
        printf("-----------MENU--------------\n");
        printf("1. Chuong trinh Kiem tra so nguyen\n");
        printf("2. Chuong trinh Tim uoc chung va boi chung cua 2 so\n");
        printf("3. Chuong trinh Tinh tien cho quan karaoke\n");
        printf("4. Chuong trinh Tinh tien dien\n");
        printf("5. Chuong trinh Chuc Nang Doi tien \n");
        printf("6. Chuong trinh Xay dung chuc nang tinh lai suat vay ngan hang vay tra gop\n");
        printf("7. Chuong trinh Vay tien mua xe\n");
        printf("8. Chuong trinh Sap xep thong tin sinh vien\n");
        printf("9. Chuong trinh Xay dung game FPOLY_LOTT\n");
        printf("10. Chuong trinh Tinh toan phan so\n");
        printf("0. Ket thuc\n");
        printf("--------------------------------------\n");
        printf("nhap vao day: ");
        scanf("%d", &choice);
        
        
         switch(choice) {
            case 1:
                printf("ban dang chay chuong trinh Kiem tra so nguyen.\n");
                break;
            case 2:
                printf("ban dang chay chuong trinh Tim uoc chung va boi chung cua 2 so.\n");
                break;
            case 3:
                printf("ban dang chay chuong trinh Tinh tien cho quan karaoke.\n");
                break;
            case 4:
                printf("ban dang chay chuong trinh Tinh tien dien.\n");
                break;  
			case 5:
                printf("ban dang chay chuong trinh Chuc Nang Doi tien.\n");
                break;	
			case 6:
                printf("ban dang chay chuong trinh Xay dung chuc nang tinh lai suat vay ngan hang vay tra gop.\n");
                break;
			case 7:
                printf("ban dang chay chuong trinh Vay tien mua xe.\n");
                break;
			case 8:
                printf("ban dang chay chuong trinh Sap xep thong tin sinh vien.\n");
                break;
			case 9:
                printf("ban dang chay chuong trinh Xay dung game FPOLY_LOTT.\n");
                break;			  
            case 10:
                printf("ban dang chay chuong trinh Tinh toan phan so.\n");
                break;    
            case 0:
                exit(0);
            default:
                printf("nhap sai vui long nhap lai\n");
                break;
        }
}
int main(){
	while(1)
	{
		menu();
	}
	return 0;
}
