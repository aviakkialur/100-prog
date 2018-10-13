//2.) C Program To Read Two Numbers And Print The Sum Of Given Two Numbers.
#include <stdio.h>
int main()
{
    int num1,num2,sum;
    printf("\nenter two numbers: ");
    scanf("%d %d",&num1, &num2);
    sum=num1+num2;
    printf("sum:%d\n",sum);
    return 0;
}
