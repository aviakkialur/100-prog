#include <stdio.h>

int main()
{
    int i,j,x=1;
   int a[3][3];
 printf("enter the array\n");
 for(i=1;i<=3;i++)
 {
     for(j=1;j<=3;j++)
     {
             a[i][j]=x;
             printf("%d\t",a[i][j]);
             x++;
         }
         printf("\n");
     }

 return 0;
}
