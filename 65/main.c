#include <stdio.h>

int main()
{
    int number, sum=0, rem=0,t;

    printf("Enter an integer number: ");
    scanf("%d", &number);

    t=number;

    while(t!=0)
    {
        rem=t%10;
        sum=sum + (rem*rem*rem);
        t/=10;
    }

/* checking number is armstrong or not */
    if(sum==number)
        printf("%d is an Armstrong number.",number);
    else
        printf("%d is not an Armstrong number.",number);

    return 0;
}
