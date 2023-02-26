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
    // Khai báo và kh?i t?o thông tin cho 2 sinh viên
    struct SinhVien sv1 = {"SV001", "Le Gia", "Huy", 2, 11, 2004, "Quang Nam", "Nam", "CNTT01"};
    struct SinhVien sv2 = {"SV002", "Ha Thao", "Linh", 12, 12, 2001, "Ho Chi Minh", "Nu", "CNTT02"};

    // Copy thông tin t? sinh viên 1 vào sinh viên 3
    struct SinhVien sv3 = sv1;

    // S?a thông tin c?a sinh viên 3
    strcpy(sv3.ho, "Dao Minh");
    strcpy(sv3.ten, "Dan");
    strcpy(sv3.queQuan, "Ho Chi Minh");
    strcpy(sv3.maSV, "SV003");

    // In thông tin c?a 3 sinh viên
    printf("Thong tin sinh vien 1: \n");
    printf("Ma SV: %s\n", sv1.maSV);
    printf("Ho va ten: %s %s\n", sv1.ho, sv1.ten);
    printf("Ngay sinh: %d/%d/%d\n", sv1.ngaySinh, sv1.thangSinh, sv1.namSinh);
    printf("Que quan: %s\n", sv1.queQuan);
    printf("Gioi tinh: %s\n", sv1.gioiTinh);
    printf("Ma lop: %s\n", sv1.maLop);

    printf("\nThong tin sinh vien 2: \n");
    printf("Ma SV: %s\n", sv2.maSV);
    printf("Ho va ten: %s %s\n", sv2.ho, sv2.ten);
    printf("Ngay sinh: %d/%d/%d\n", sv2.ngaySinh, sv2.thangSinh, sv2.namSinh);
    printf("Que quan: %s\n", sv2.queQuan);
    printf("Gioi tinh: %s\n", sv2.gioiTinh);
    printf("Ma lop: %s\n", sv2.maLop);

    printf("\nThong tin sinh vien 3: \n");
    printf("Ma SV: %s\n", sv3.maSV);
    printf("Ho va ten: %s %s\n", sv3.ho, sv3.ten);
    printf("Ngay sinh: %d/%d/%d\n", sv3.ngaySinh, sv3.thangSinh, sv3.namSinh);
    printf("Que quan: %s\n", sv3.queQuan);
    printf("Gioi tinh: %s\n", sv3.gioiTinh);
    printf("Ma lop: %s\n", sv3.maLop);

    return 0;
}
