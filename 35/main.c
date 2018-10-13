//35.) C Program to accept two numbers and print sum of two numbers by using functions
#include <stdio.h>

int sum(int a,int b)
{
  int  c;
  c=a+b;
  return c;
}

int main()
{
    int x,y,s;
    printf(" enter the 1st number\n");
    scanf("%d",&x);
    printf(" enter the 2st number\n");
    scanf("%d",&y);
    s=sum(x,y);
    printf(" the sum of two numbers %d \n",s);
    return 0;
}
//#include <stdio.h>   /* Link section */
//int total = 0;       /* Global declaration, definition section */
//int sum (int, int);  /* Function declaration section */
//int main ()          /* Main function */
//{
//    printf ("This is a C basic program \n");
//    total = sum (1, 1);
//    printf ("Sum of two numbers : %d \n", total);
//    return 0;
//}

//int sum (int a, int b) /* User defined function */
//{
//    return a + b;      /* definition section */
//}
