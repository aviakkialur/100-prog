#include <stdio.h>
void swap(int *a,int *b)
{
    int *c;
    *c=*a;
    *a=*b;
    *b=*c;
}
int main()
{
    int a=3,b=9;
    printf("%d\n",a);
    printf("%d\n",b);
    swap(&a,&b);
    printf("%d\n",a);
    printf("%d\n",b);

    return 0;
}

