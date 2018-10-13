
//C Prongram to accept a string and print each word in reverse
#include <stdio.h>
#include <string.h>

int main()
{
    int j,i,n;
    char str[100];
    printf("Enter String\n");
    fgets(str, sizeof str, stdin);

    printf("\nString in Reverse Order\n");
    i=0;
    while(str[i]!='\0')
    {
        if(str[i]==' ')
        {
            for(j=i-1;j>=0 && str[j] != ' ';j--)
            {
printf("%c",str[j]);

            }

            printf(" ");
        }
        i++;
    }
return 0;
}
