#include<stdio.h>
main( )
{
int a[4][4],i,j,c;
printf("enter which number you want");
scanf("%d",&c);
for(i=0;i<4;i++)
for(j=0;j<4;j++)
if(i+j==3)
a[i][j]=c;
else
a[i][j]=0;
for(i=0;i<4;i++)
{
for(j=0;j<4;j++)
printf("%d",a[i][j]);
printf("\n");
}
}
