/* Doi mot ky tu hoa thanh ky tu thuong*/
#include <stdio.h>
int huhuh()
//void main()
{
    char c;
    printf("Please enter a character: ");
    scanf("%c", &c);

    if (c >= 'A' && c <= 'Z')
        printf("lowercase character = %c", c + 'a'-'A');

    else
        printf("Character Entered is = %c", c);
}
