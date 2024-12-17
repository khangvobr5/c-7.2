#include <stdio.h>
int main() {
    int mang[5];
    printf("Nhap 5 phan tu cua mang:\n");
    for (int i = 0; i < 5; i++) {
        printf("Nhap phan tu %d: ", i + 1);
        scanf("%d", &mang[i]);
    }
    printf("\nMang vua nhap la:\n");
    for (int i = 0; i < 5; i++) {
        printf("Phan tu %d: %d\n", i + 1, mang[i]);
    }
    return 0;
}

