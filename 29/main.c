
#include <stdio.h>
#include<string.h>
int main()
{
    int i;
    char a[10] ;

    printf("enter the string\n");
    scanf("%s",&a);
    for(i=0;i<=10;i++)
        a[i]=a[i]+32;
    printf(" string is %s \n",a);
    return 0;
}

