
#include <stdio.h>
#include<string.h>
#include <ctype.h>
int main()
{
    char a;
    printf("enter the upper case\n");
    scanf("%c",&a);
    strlwr();
    printf(" the given value is %c\n",a);
    return 0;
}

