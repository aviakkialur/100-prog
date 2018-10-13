#include <stdio.h>
int main()
{
    int a,r,sum;
    char arr[10];
    printf("enter the two number\n");
    scanf("%d",&a);
    while(a!='\0')
    {
        r=(a%10);
        a=(a/10);
        sum=(sum+r);
    }
    printf("%d",sum);
    return 0;
}
