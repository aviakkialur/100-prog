//39.) C Program to accept 10 numbers and print first five numbers in original order and print last five numbers in reverse order.
#include<stdio.h>
int main( )
{
    int array[10],rev=0,d,i,num;
    printf("Enter 10 number number: \n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&array[i]);
    }
    array[i]=0;
    printf(" the first 5 num \n");
    for(i=0;i<5;i++)
    {
        printf("%d\n",array[i]);
    }

    printf("\n");
    for(i=5;i<=10;i++)
    {
        num=array[i];
        while(num)
        {
            d=num%10;
            num=num/10;
            rev=rev*10+d;
        }
        printf("\nReverse of the number = %d",rev);
        rev=0;
    }
    return 0;
}
