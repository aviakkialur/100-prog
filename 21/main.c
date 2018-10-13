// C Program to find biggest of two no by using ternary numbers
#include <stdio.h>
int main()
{
    int a,b,big;
    printf("enter thte  2 value\n");

    printf("enter thte first value\n");
    scanf("%d",&a);
    printf("enter thte second value\n");
    scanf("%d",&b);
    big=a>b?a:b;
    printf(" the biggest value is  %d\n",big);
    return 0;
}
//#include <stdio.h>
//int main()
//{
//    int a,b;
//    printf("enter thte  2 value\n");

//    printf("enter thte first value\n");
//    scanf("%d",&a);
//    printf("enter thte second value\n");
//    scanf("%d",&b);
//    if(a>b)
//    {
//        printf(" the biggest value is  %d\n",a);
//    }
//    else
//    {
//       printf(" the biggest value is  %d\n",b);
//    }
//    return 0;
//}
