//C Program to accept a character in the uppercase and print in lower case.
#include <stdio.h>
int main()
{
    char a;
    printf("enter the upper case\n");
    scanf("%c",&a);
    a=a+32;
    printf(" the given value is %c\n",a);
    return 0;
}
