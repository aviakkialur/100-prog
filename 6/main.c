// C Program to accept a year and check whether the given year IS leap year or not.
#include <stdio.h>

int main()
{
    int i;
    printf("enter the year\n" );
    scanf("%d",&i);
    {
        if (i%400==0)
            printf("its a leep year\n");
            else if
                    (i%100==0)
                printf("its not leep year\n");

                else if
                        (i%4==0)
                    printf("its a leep year\n");

                    else
                    printf("not a leep year\n");
                 }
    return 0;
}
