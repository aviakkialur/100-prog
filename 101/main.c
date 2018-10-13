#include <stdio.h>

int main()
{
    int i,j;
   char a[10],b[i];
    for(i=0;i<10;i++)
    {
        a[i]=i;
        b[i]=a[i];
        printf("%d",a[i]);
        b[i]++;
         printf("\n");

}
       printf("\n");
    for(i=0;i<10;i++)
   printf("%d\n",b[i]);
    return 0;
}
