/* this program demonstrate the use of modifiers in printf() */
#include <stdio.h>
//int vidu3()
int main()
{
    char fullname[100];
    printf("Moi ban nhap ten: ");
    gets(fullname);
    printf("Xin chao ban %s", fullname);
    return 0;
}
