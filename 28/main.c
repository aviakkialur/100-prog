//C Program to accept a string and print it by using the while loop.
#include <stdio.h>
int main()
{
    int i,end;
    printf("enter the numes from 1 to ");
    scanf("%d",&end);
    i=1;
    while (i<=end)
    {
      printf("%d\n",i);
      i++;
    }
    return 0;
}
