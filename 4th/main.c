//4.)C Program To Read Three Numbers And Print The Biggest Of Given Three Numbers
#include <stdio.h>
int main()
{
    int array[50],size,i,largest;
            printf("enter the size of array\n");
    scanf("%d",&size);
    printf("enter the array of size %d\n",size);
    {
        for (i=1;i<=size;i++)
            scanf("%d", &array[i]);
    }
        largest = array[0];
        for (i=1;i<=size;i++)
        {
            if (largest < array[i])
                largest = array[i];
        }

        printf("\n largest element present in the given array is : %d\n", largest);
    return 0;
}
