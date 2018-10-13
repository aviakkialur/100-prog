#include <stdio.h>
#include <math.h>
int main()
{int num,rem,c,sum,d=0,x,i,n;
    for(i=1;i<=500;i++)
    {
        num=i;
        c=num;
        d=0;

        while(num!=0)
        {
            rem=(num%10);
            num=(num/10);
            d++;
        }

        num=c;
        sum=0;
        while (num!=0)
        {
            rem=num%10;
            num=num/10;
            x= pow(rem,d);
            sum=sum+x;
        }
        if(sum==c)
        {
            printf(" the arm nor%d\n",c);

        }

    }
    return 0;
}
