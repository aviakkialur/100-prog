//C Program to accept a number and print mathematical table of the given no.
#include <stdio.h>

int main()
{
    int i,num,x;
    printf("enter the value\n");
    scanf("%d",&num);
    printf("\nThe table is:\n");
    for(i=1;i<=10;i++)
    {
        x=num*i;
        printf("%d X %d = %d\n",num, i, x);
    }
    return 0;
}
