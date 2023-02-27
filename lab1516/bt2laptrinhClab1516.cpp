#include <stdio.h>
#include <string.h>

struct SinhVien {
    char maSV[10];
    char ho[20];
    char ten[10];
    int ngaySinh;
    int thangSinh;
    int namSinh;
    char queQuan[50];
    char gioiTinh[5];
    char maLop[10];
};

int main() {
    // Tao mot mang có 5 phan tu kieu struct SinhVien de luu thông tin sinh viên
    struct SinhVien sv[5];
    struct SinhVien sv1 = {"SV001", "Le Gia", "Huy", 2, 11, 2004, "Quang Nam", "Nam", "We18305"};
    struct SinhVien sv2 = {"SV002", "Ha Thao", "Linh", 1, 11, 2000, "Ho Chi Minh", "Nu", "We18304"};
    struct SinhVien sv3 = {"SV003", "Dao Minh", "Dan", 26, 11, 2004, "Ho Chi Minh", "Nam", "We18303"};
    struct SinhVien sv4 = {"SV004", "Dao Minh", "Phuc", 12, 12, 2004, "Ho Chi Minh", "Nam", "We18302"};
    struct SinhVien sv5 = {"SV005", "Le Van", "Hieu", 4, 7, 2004, "Quang Nam", "Nam", "We18301"};
    

    
    // Nhap thong tin cho 5 sinh vien tu ban phim
for (int i = 0; i < 5; i++) {
    printf("Nhap thong tin cho sinh vien thu %d:\n", i+1);
    printf("Ma SV: ");
    fgets(sv[i].maSV, 10, stdin);
    printf("Ho: ");
    fgets(sv[i].ho, 20, stdin);
    printf("Ten: ");
    fgets(sv[i].ten, 10, stdin);
    printf("Ngay sinh: ");
    scanf("%d", &sv[i].ngaySinh);
    getchar(); 
    printf("Thang sinh: ");
    scanf("%d", &sv[i].thangSinh);
    getchar(); 
    printf("Nam sinh: ");
    scanf("%d", &sv[i].namSinh);
    getchar(); 
    printf("Que quan: ");
    fgets(sv[i].queQuan, 50, stdin);
    printf("Gioi tinh: ");
    fgets(sv[i].gioiTinh, 5, stdin);
    printf("Ma lop: ");
    fgets(sv[i].maLop, 10, stdin);
}


    // In ra danh sách 5 sinh viên vua nhap
    printf("\nDanh sach sinh vien:\n");
    for (int i = 0; i < 5; i++) {
        printf("Sinh vien thu %d:\n", i+1);
        printf("Ma SV: %s\n", sv[i].maSV);
        printf("Ho va ten: %s %s\n", sv[i].ho, sv[i].ten);
        printf("Ngay sinh: %d/%d/%d\n", sv[i].ngaySinh, sv[i].thangSinh, sv[i].namSinh);
        printf("Que quan: %s\n", sv[i].queQuan);
        printf("Gioi tinh: %s\n", sv[i].gioiTinh);
        printf("Ma lop: %s\n", sv[i].maLop);
        printf("\n");
    }

    return 0;
}

