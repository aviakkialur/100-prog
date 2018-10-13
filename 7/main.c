//C Program to print Individual Digits
#include <stdio.h>

int main()
{
    int i=0,j,k,l,num,rem=0,array[10]={0};
    printf("enter the number\n");
        scanf("%d",&num);
//                i=(num%10);
//                j=(num/10);
//                printf("%d \n",i);
//                k=j;
//                i=0;
//                i=(k%10);
//                j=(k/10);
//                printf("%d \n",i);
//                l=j;
//                i=0;
//                i=(l%10);
//                j=(l/10);
//             r   printf("%d \n",i);
       while (num!=0)
       {

        rem=(num%10);
        num=(num/10);
        array[i]=rem;

        printf("%d\n",array[i]);
       i++;
      }
        return 0;
    }
