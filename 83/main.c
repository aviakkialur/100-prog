#include <stdio.h>
#include<string.h>
int main()
{
    int i,j,n=0,k;
    char a[500];
    printf("enter the string \n");
    gets(a);
    i=0;
    while(a[i]!='\0')
    {
        if(a[i]==' ')
        {
            k=i;

            for(j=n;j<=1;j++)
            {
                printf("%c",a[j]);
            }
//            printf("\t");
            n=k;
        }

        i++;
    }


    return 0;
}
