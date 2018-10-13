#include<stdio.h>
int main( )
{
int a[20],i,n1=0,n2=0,n3=0,n4=0,n5=0;

printf("enter the any 20 no of range(1-25)");
for(i=1;i<=20;i++)
scanf("%d",&a[i]);
for(i=1;i<=20;i++)
if((a[i]>=1)&&(a[i]<6))
n1++;
else
if((a[i]>5)&&(a[i]<11))
n2++;
else
if((a[i]>10)&&(a[i]<16))
n3++;
else
if((a[i]>15)&&(a[i]<21))
n4++;
else
if((a[i]>20)&&(a[i]<26))
n5++;
printf("class interval frequency");
printf("\n 1-5 %d",n1);
printf("\n 6-10 %d",n2);
printf("\n 11-15 %d",n3);
printf("\n 16-20 %d",n4);
printf("\n 21-25 %d",n5);
return 0;
}
