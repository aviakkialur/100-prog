//C Program to accept a string and count no of capital letters, no. of small letters and no. of special characters
#include <stdio.h>
int main()
{
    long long n;
    int i,countupper=0,countlower=0,countspl=0;
    char str[i];
    printf("enter the size string");
    scanf("%d",&i);
    printf("enter the string ");
    scanf("%s",&str);
    for(i=0;i<10;i++)
    {
        if (str[i]<=90 && str[i]>=65)
        {
            printf("the upper letter %c\n",str[i]);
            countupper++;

        }
        else if (str[i]<=96 && str[i]>=91)
        {
            printf("the  spl char %c\n",str[i]);
            countspl++;


        }
        else if (str[i]<=122 && str[i]>=97)
        {
            printf("the lower letter %c\n",str[i] );
            ++countlower;


        }

    }
    printf("countupper %d\n",countupper );
     printf("countspl %d\n",countspl );
      printf("countlower %d\n",countlower );

return 0;
}

