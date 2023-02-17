#include <stdio.h>

int main() {
    int i;
    for (i = 1; i <= 100; i++) {
        printf("%02d ", i);
        if (i % 10 == 0) {
            printf("\n");
        }
    }
    return 0;	
}

