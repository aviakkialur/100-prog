#include <stdio.h>

int main()
{
    int n,i;
    printf("enter the string size \n");
    scanf("%d",&n);
    char str[n];
    printf("enter the string\n");
    scanf("%s",str);
    for(i=n;i>=0;i--)
    {
        printf("%c",str[i]);
    }
    printf("\n");
    return 0;
}

