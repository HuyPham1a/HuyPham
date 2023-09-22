#include <stdio.h>

int toantu2(){
//int main() {
    int a = 5;
    int b = 10;
    int c = 7;

    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    printf("c = ");
    scanf("%d", &c);

    // tổng hợp tất cả loại toán tử
    printf("biểu thức ví dụ là: a + b > c && a != b\n");
    printf("ket qua bieu thuc (%d + %d > %d && %d != %d)\n", a, b, c, a, b);
    int ketqua = a + b > c && a != b;
    printf("ket qua: %d\n", ketqua);

    printf("biểu thức ví dụ là : a + b > c ||a !=b\n");
    printf("ket qua bieu thuc (%d + %d > %d || %d != %d)\n", a, b, c, a, b);
    int ketqua2 = a + b > c || a != b;

    return 0;
}


