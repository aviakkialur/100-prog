//50. C Program to interchange two values using pointers/
#include <stdio.h>
int main()
{
    int a,b,*p,*q,sum;
    printf("enter the 2 number\n");
    scanf("%d %d",&a,&b);
    p= &a;
    q= &b;
    sum = *p + *q;
    printf("sum =: %d \n",sum);
    return 0;
}
