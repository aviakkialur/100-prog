
//C Program to print character diamond.#include <stdio.h>
int main()
{
    int i,j,k,l;
     char str[5]="abcde";
    for(i=0;i<5;i++)
    {
        for(j=i;j<5;j++)
            printf(" ");
        for(k=0;k<=i;k++)
            printf("%c",str[i]);
        for(l=i;l>=1;l--)
             printf("%c",str[i]);
        printf("\n");
    }
    for(i=4;i>=0;i--)
    {
        for(j=i;j<5;j++)
            printf(" ");
        for(k=i+1;k>=0;k--)
           printf("%c",str[i]);
        for(l=0;l<=i-1;l++)
         printf("%c",str[i]);
        printf("\n");
    }

    return 0;
}
