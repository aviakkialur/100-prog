#include <stdio.h>
int main()
{int i;
    char *a,b[10];
    printf("enter the string \n");
    scanf("%s",&b);
    a=b;
    for(i=0;b[i]!='\0';i++)
    {
        printf("%c",*a++);
    }
    printf("\n");
    return 0;
}
