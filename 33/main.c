// C Program to accept any single digit number and print it in words .
#include <stdio.h>
int main()
{
    int d;
    printf("enter the digit c 0-9 ?\n");
    scanf("%d",&d);
    switch (d)
    {
        case 0:
            printf("zero\n");
            break;
        case 1:
            printf("one\n");
            break;
        case 2:
            printf("two\n");
            break;
        case 3:
            printf("three\n");
            break;
        case 4:
            printf("four\n");
            break;
        case 5:
            printf("five\n");
            break;
        case 6:
            printf("six\n");
            break;
        case 7:
            printf("seven\n");
            break;
        case 8:
            printf("eight\n");
            break;
        case 9:
            printf("nine\n");
            break;
    }
    return 0;
}
//#include<stdio.h>
//void main()
//{
//   int d;
//   printf("Enter Digit(0-9) ? ");
//   scanf("%d",&d);
//   switch(d)
//   {
//case 0:
//      printf("Zero\n");
//      break;

//case 1:
//      printf("one\n");
//      break;
//case 2:
//      printf("Two\n");
//      break;
//case 3:
//      printf("Three\n");
//      break;
//case 4:
//      printf("Four\n");
//      break;
//case 5:
//      printf("Five\n");
//      break;
//case 6:
//      printf("Six\n");
//      break;
//case 7:
//      printf("Seven\n");
//      break;
//case 8:
//      printf("Eight\n");
//      break;
//case 9:
//      printf("Nine\n");
//      break;
//default:
//      printf("invalid digit\nPlease try again ....\n");
//      break;
//      }
//}
