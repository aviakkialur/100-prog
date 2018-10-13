//C Program to accept a number and check the given number is Armstrong or not.
#include <stdio.h>
#include<math.h>
int main()
{
    int i=0,num,rem,array[10]={0},sum=0,c,digit=0,res=0;
    printf("enter the num\n");
    scanf("%d",&num);
    c=num ;
    while (num!=0)
    {
        rem= num%10;
        num=num/10;

        digit++;
    }
    num=c;
    while (num!=0)
    {
        rem= num%10;
        num=num/10;
        res=pow(rem,digit);
//        array[i]=rem;
        sum=sum+res;
//        i++;
    }

    printf("  sum of num %d\n ",sum);
    {
    if(sum==c)

        printf(" it is a aramsrong num\n");

    else

        printf(" it is not a aramstrong num\n");
    }
    return 0;
}
