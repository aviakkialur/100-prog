//C Program to print 1 to 10 mathematical tables.
#include <stdio.h>
int main()
{
    int i,j,mul=1;
    for(i=1;i<=10;i++)
    {
        for(j=1;j<=10;j++)
        {
            mul=j*i;
            printf(" %d\n",mul);
        }
        printf("\n");
    }

    return 0;
}
