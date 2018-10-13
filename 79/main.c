#include <stdio.h>
int main()
{
    int i,j,n,array[15];
    int *pt;
    printf("print the size of an  array\n");
    scanf("%d",&n);
    pt=&array[0];
    printf("the elements are\n ");
    for(i=0;i<=5;i++)
    {
        printf("the array is-%d\n",i+1);
        scanf("%d",pt);
        pt++;
    }
    pt=array[n-1];
    printf( "the reverse of array\n ");
    for(i=n;i>=0;i--)
        printf("the array is-%d \n",i);
    printf("the array is-%d ",pt);
    return 0;
}
