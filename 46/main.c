//C Program to count the number of words, characters, alphabets, vowels, consonants and digit in a line of text.
#include<stdio.h>
int main()
{
    char a[200];
    int vowels=0, consonents=0, word=0, digits=0, space=0,i;
    printf("enter the sentence\n");
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        if  (a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='O'||a[i]=='U')
            vowels++ ;
        else if (a[i] >= '0' && a[i] <= '9')
            ++digits;
        else
            consonents++;
        if (a[i]==' ')
        space++;

    }
    printf("the vowels are %d\n ",vowels);
    printf("the codfobnsonents %d\n",consonents);
    printf("the digits %d\n",digits);
    printf("the space %d\n",space);
    return 0;
}

