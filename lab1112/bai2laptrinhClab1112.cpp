#include <stdio.h>

int main() {
    int a[3][3] = {{3, 9, 11}, {2, 6, 15}, {4, 7, 24}};
    int num, i, j, found = 0;
    printf("Mang 2 chieu:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("Nhap vao mot so tu 1 den 100: ");
    scanf("%d", &num);
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (a[i][j] == num) {
                printf("Vi tri cua so %d la [%d][%d]\n", num, i, j);
                found = 1;
                break;
            }
        }
        if (found) {
            break;
        }
    }
    if (!found) {
        printf("So %d khong co trong mang\n", num);
    }
    
    return 0;
}

