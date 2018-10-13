#include <stdio.h>
#include<string.h>
//
int main()
{
    int n,i,res,j=0;
    printf("enter the string size \n");
    scanf("%d",&n);
    char str[n],str2[n];
    printf("enter the string\n");
    scanf("%s",str);

//    for(i=n;i>=0;i--)
//    {
//        printf("%c",str[i]);

//        str2[j]=str[i];
//                j++;
//    }


    printf("\n");
      printf(" the str2 %c\n",str2[0]);
    {
        int res = strcmp(str,str2);
printf("Strings are equal %d",res);
        if (res==0)
             printf("Strings are palindrom");
        else
           printf("Strings are not palindrom ");
    printf("\n");

    printf("\n");
 printf(" the str %c\n",str[0]);

    return 0;
    }
}
