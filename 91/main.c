
#include<stdio.h>
void read_array(int x[]);
void sort_array(int y[]);
void print_array(int z[]);
main()
{
int a[10];
read_array(a);
sort_array(a);
print_array(a);
}
void read_array(int x[])
{
int i;
for(i=0;i<10;i++){
printf("enter value for a[%d]",i);
scanf("%d",&x[i]);
}
}
void sort_array(int y[])
{
int i,j,k;
for(i=0;i<9;i++)
for(j=i+1;j<=9;j++)
if(y[i]>y[j]){
k=y[i];
y[i]=y[j];
y[j]=k;
}
}
void print_array(int z[])
{
int i;
for(i=0;i<10;i++)
printf("%d\n",z[i]);
}
