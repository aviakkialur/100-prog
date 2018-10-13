//C Program to accept a character in any case and print in another case.
#include<stdio.h>
int main( )
{
char ch,c1;
printf("enter a char in anycase");
scanf("%c",&ch);
 if(ch>=65 && ch<=90)
c1=ch+32;

else
if(ch>=97 && ch<=122)

    c1=ch-32;

printf("the given char in anothercase IS %c ",c1);
return 0;
}
