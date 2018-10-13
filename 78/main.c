#include <stdio.h>
#include <math.h>
int main()
{
    int s,a,b,c,area;
    printf("enter the hight:");
    scanf("%d",&a);
    printf("enter the base:");
    scanf("%d",&b);
    printf("enter the base:");
    scanf("%d",&c);
    s=(a+b+c)/2;
    area= sqrt (s *(s - a) * (s - b)*( s - c));
    printf("the area of the tringle:%d",area);
    return 0;
}
