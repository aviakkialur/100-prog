//C Program to accept a string and print reverse of the given string by using functions.
#include <stdio.h>
#include<string.h>
int main()
{ int i,j;
    char a[1000];
    printf("enter the string ");
    scanf("%s",&a);
   j= strlen(a);
    for(i=j;i>=0;i--)
    {
      printf("%c",a[i]);
    }
    return 0;
}
