#include <stdio.h>

int main()
{
   int x, y, *a, *b, temp;

   printf("Enter the value of x and y\n");
   scanf("%d%d", &x, &y);

   printf("before = %d\n = %d\n", x, y);

   a = &x;
   b = &y;

   temp = *b;
   *b = *a;
   *a = temp;

   printf("\n = %d\n = %d\n", x, y);

   return 0;
}
