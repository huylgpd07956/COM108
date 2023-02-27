//10 chuc nang trong menu chuong trinh
//cac thu vien trong c
//khai bao thu vien stdio.h
#include <stdio.h>
//khai bao thu vien stdlib.h
#include <stdlib.h>
//khai bao thu vien conio.h
#include <conio.h>
//khai bao thu vien math.h
#include <math.h>
int main()
{
	//khai bao bien chon voi kieu du lieu int
    int chon;
    
    do
    {
        system("cls");//xoa chu tren man hinh
        printf("\t\t\t ===================== MENU CHUONG TRINH =======================\n");
        printf("\t\t\t |1.Kiem tra so nguyen                                         |\n");
        printf("\t\t\t |2.Tim uoc so chung va boi so chung cua 2 so                  |\n");
        printf("\t\t\t |3.Chuong trinh tinh tien cho quan Karaoke                    |\n");
        printf("\t\t\t |4.Chuc nang doi tien                                         |\n");
        printf("\t\t\t |5.Xay dung chuong trinh vay tien mua xe                      |\n");
        printf("\t\t\t |6.Thoat                                                      |\n");
        printf("\t\t\t ===============================================================\n");// exit(0);
        printf("Ban chon tu 1 -->11: ");
        scanf("%d", &chon);
        switch(chon)
        {
        	case 1:{/*kiem tra so nguyen*/
        		//in ra man hinh chuoi:kiem tra so nguyen
        		printf("Kiem tra so nguyen");
        		//khai bao bien x voi kieu du lieu int
        		int x;
        		//in ra man hinh chuoi:gia tri cua x
            	printf("\nGia tri cua x: ",x);
            	//nhap bien x vao man hinh
	            scanf ("%d",&x);
	            //dieu kien neu x<2 thi khong phai so nguyen to
            	if(x<2){
            	//in ra man hinh chuoi:khong phai so nguyen to
	printf ("khong phai so nguyen to:");
	//tra ve 0
	return 0;
	}
	//khai bao bien count=0 voi kieu du lieu int
	int count=0;	
		for(int i=2;i<=sqrt(x); i++){
		if(x%i==0){
			count++;
			}
		}
		//neu count bang 0 thi la so nguyen to
	if (count==0){
		printf("la so nguyen to:",x);
		//neu count khong bang 0 thi khong phai so nguyen to
		}else {
			printf("khong phai so nguyen to:",x);
			}
			//neu x khac 0 thi la so nguyen
			if(x!=0){
				printf("\nla so nguyen:");
				//neu x bang 0 thi khong phai so nguyen
				}else if(x==0){
					printf("\nkhong phai so nguyen");
					}
					//khai bao bien i
					int i =0;
	while (i*i <=x){
		if(i*i ==x){
			printf("%d\nla so chinh phuong!\n",x);
			return 0;
		}
		++i;
	}
	printf("%d\nkhong phai so chinh phuong!\n",x);
		getch();
		break;}
        	case 2:{/*Tim uoc so chung va boi so chung cua 2 so*/
        		printf("Tim uoc so chung va boi so chung cua 2 so");
        			int x,y,i,j,ucln,bcnn;
	do
	{
		//in ra man hinh gia tri x,y
	printf("\nGia tri cua x: ",x);
	scanf("%d",&x);
	printf("\nGia tri cua y: ",y);
	scanf("%d",&y);
	      if ((x <= 0) || (y <= 0))
            printf("Xin nhap lai tri a va b nguyen duong\n");
    }
    //vong lap while//
    while ((x <= 0) || (y <= 0));
    //tim uoc so lon nhat (UCLN)
    if ( x > y )
    {
        for ( i = 1; i < x; i++)
            if((x % i == 0) && (y % i == 0))
                ucln = i;
        j = x;
        while ((j % x == 0) && (j % y == 0))
        {
            bcnn = j;
            j++;
        }
    }
    //tìm boi so nho nhat (BCNN)
    else
        if ( x < y )
        {
            for ( i = 1; i < x; i++)
                if((x % i == 0) && (y % i == 0))
                    ucln = i;
            j = y;
            while ((j % x == 0) && (j % y== 0))
            {
                bcnn = j;
                j++;
            }
        }
        else
        {
            ucln = x;
            bcnn = x;
        }
        //in ra man hinh x,y,ucln,bcnn
    printf("Uoc chung lon nhat cua %d va %d la: %d\n", x, y, ucln);
    printf("Boi chung nho nhat cua %d va %d la: %d\n", x, y, bcnn);
 
        		getch();
        		break;}
        	case 3:{/*Chuong trinh tinh tien cho quan Karaoke*/
        		printf ("Chuong trinh tinh tien cho quan Karaoke");
        		//khai bao bien Start, End
        		int Start, End;
        		//Nhap du lieu vào man hinh
printf ("\nXin moi nhap gio bat dau: ");
scanf ("%d", &Start);
printf ("\nXin moi nhap gio ket thuc: ");
scanf ("%d", &End);
//khai bao bien
int soGioHat= Start - End;
double TienThanhToan;
int gioThem;
double tienThem;
//dieu kien du lieu
if (soGioHat<=3){
	TienThanhToan = soGioHat * 150000;
	} else{
		gioThem = soGioHat -3;
		tienThem = gioThem * 150000 *0.7;
		TienThanhToan = 3*150000+tienThem;
		}
if(Start>=14 && Start<=17);
TienThanhToan = TienThanhToan * 0.9;
//in ra man hinh
printf("Gia tien can thanh toan: %.2f",TienThanhToan);

        		getch();
        		break;}
        	case 4:{/*Chuc nang doi tien*/
			    printf ("\nChuc nang doi tien");
			    int doitien;
			        //khai bao mang
			    	int array [9]={ 500, 200, 100 , 50, 20, 10, 5, 2, 1};
			    	//khai bao bien
			    	int money, count , temp = 1;
			    	printf (" Co nhung menh gia 500, 200, 100, 50, 20, 10, 5, 2, 1 \n");
			    	printf("----------------------------\n");
			    	printf (" Nhap vao so tien can doi : ");
			    	//nhap du lieu vao man hinh
			    	scanf("%d",&money);
			    	//duyet mang
			    	for (int i=0;i<9;i++){
			    		if (money>array [i] || temp == 0){
			    			count = money /array [i];
			    			if (count !=0)printf (" Co %d to %d \n", count, array[i]);
			    			money %= array [i];
			    			temp = 0;
			    		}
			    	}
			    	getchar();//lay mot gia tri
			    getch();
			    break;}
			case 5:{/*Xay dung chuong trinh vay tien mua xe*/
				printf ("Xay dung chuong trinh vay tien mua xe");
 int phanTram,i;
 float tienTra,banDau,conLai,goc;
 printf("\nnhap so phan tram muon vay trong 500tr\n");
 scanf("%d",&phanTram);
 banDau=500*(100-phanTram)/100;

 printf("so tien phai tra ban dau la %f\n",banDau);
//so tien ban dau phai tra
 conLai=500-banDau;
 goc=conLai/24;
 tienTra=conLai;//gan cho no bang tientra
 for(i=0;i<24;i++){
  float lai=tienTra*0.072;//tinh lai
  tienTra=tienTra-goc;
  printf("\nso tien phai tra thang %d la %.3ftr",i+1,(lai+goc)/12);
  
 }
				getch();
				break;}
			case 6:{
				break;
			}
			default://chon lai chuong trinh
                printf("Ban chon sai. Moi ban chon lai MENU!\n");
                break;
        }
    }while(chon!=6);//vui long chon tu 1 den 6
    return 0;//tra ve 0
}
