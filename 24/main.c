// C Program to accept a year and check the given year is leap or not by using ternary
#include <stdio.h>
int main()
{
    int i;
    printf("print the year\n");
    scanf("%d",&i);
    (i%4==0 && i%100!=0) ? printf("LEAP YEAR") :
         (i%400 ==0 ) ? printf("LEAP YEAR") : printf("COMMON YEAR");
    return 0;
}
