#include <stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[200],a,b;
    printf("enter the str1\n");
    scanf("%s",str1);
    printf("enter the str2\n");
    scanf("%s",str2);
    a=strlen(str1);
    b=strlen(str2);
printf("%d\n",a);
printf("%d\n",b);
        if(a>b)

        {
            printf("%s\n",str1);
        }
        else
        {
            printf("%s\n",str2);
        }


    return 0;
}
