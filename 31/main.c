//31.) C Program to accept a string print each word in new line.
#include <stdio.h>
#include<string.h>
int main()
{
    int i;
    char a[10] ;

    printf("enter the string\n");
    scanf("%s",&a);
    printf(" string is\n");

    while(i<=10)
    {
        printf("%c \n",a[i]);
        i++;
    }

    return 0;
}
