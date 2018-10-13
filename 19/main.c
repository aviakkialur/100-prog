#include <stdio.h>
int main()
{
    int i,j,k,l;
    char str[5]="abcde";
    for(i=0;i<5;i++)
    {
        printf("\n");
        for(j=i;j<5;j++)
            printf(" ");
        for(k=0;k<=i;k++)
            printf("%c",str[i]);
        for(l=i;l>0;l--)
            printf("%c",str[i]);

    }
    printf("\n");
    return 0;
}
