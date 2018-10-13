#include <stdio.h>

int main()
{
    char a[10],i=10;
    printf("entetr the odd number\n");
   gets(a);
    i=0;
    while (a[i]!='\0')
    {
        i++;
    }
    printf("%d",i);

    return 0;
}
