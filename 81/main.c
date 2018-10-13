#include <stdio.h>
#include<string.h>

int main()
{int result;
    char a[100],b[100];
    printf("enter the string");
    scanf("%s",&a);
    printf("enter the second string");
    scanf("%s",&b);
    result= strcmp(a,b);
    if(result==0)
    {
        printf("the given strings sre eq");
    }
    else
        printf("the given strings are not equal");

    return 0;
}
