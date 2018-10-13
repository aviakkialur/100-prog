#include <stdio.h>
void main()
{
    FILE *fp1, *fp2;
    char ch;
    fp1 = fopen("/home/avinash/even.txt", "r");
    fp2 = fopen("/home/avinash/number.txt", "w");
    while((ch = getc(fp1)) != EOF)
        putc(ch, fp2);
    fclose(fp1);
    fclose(fp2);
    return 0;
}
