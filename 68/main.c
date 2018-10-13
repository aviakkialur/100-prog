#include<stdio.h>
void main()
{
int a[20][20],i,j,m,n;
printf("enter the rows and columns of the matrixs\n");
scanf("%d%d",&m,&n);
printf("Enter the first matrics\n");
for(i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
      {
      scanf("%d",&a[i][j]);   //reads the matrics
      }
 }
printf("The diagonal element of the matrics are\n");
for(i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
      {
      if(i==j)
      printf("%d ,",a[i][j]);   //prints the diagonal element of the matrics
      }

 }
return 0;;
 }
