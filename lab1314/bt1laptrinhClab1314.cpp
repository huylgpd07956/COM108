#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Viet Nam Dat Nuoc Toi";
    int len_with_space = strlen(str1);
    int len_without_space = 0;
    int count_t = 0;
    char str2[strlen(str1)];
    strcpy(str2, str1);
    
    for (int i = 0; str1[i] != '\0'; i++) {
        if (str1[i] != ' ') {
            len_without_space++;
        }
        if (str1[i] == 't') {
            count_t++;
        }
        if (i == 0 || str1[i-1] == ' ') {
            str2[i] = (str2[i]);
        }
    }
    
    printf("Chuoi str1: %s\n", str1);
    printf("Do dai chuoi str1 (bao gom khoang trang): %d\n", len_with_space);
    printf("Do dai chuoi str1 (khong bao gom khoang trang): %d\n", len_without_space);
    printf("So lan xuat hien cua chu cai 't' trong chuoi str1: %d\n", count_t);
    printf("Chuoi str2: %s\n", str2);
    printf("Chuoi in hoa cua str1: %s\n", strupr(str1));
    printf("Chuoi in thuong cua str2: %s\n", strlwr(str2));
    if (strcmp(str1, str2) == 0) {
        printf("Hai chuoi str1 va str2 giong nhau.\n");
    } else {
        printf("Hai chuoi str1 va str2 khac nhau.\n");
    }
    
    return 0;
}

