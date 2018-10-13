//C Program to accept two string and compare the strings are equal or not
#include <stdio.h>
#include<string.h>
int main()
{
    int i,g;
    char a[50],b[50];

    printf("enter the 1 st string\n");
    scanf("%s",a);
    printf("enter the second string\n");
    scanf("%s",b);
    g = strcmp(a,b);
if(g == 0) printf("Strings are the same\n");

if (g < 0) printf("Second string is less than the first\n");

else printf("first  string is less than the second \n");
    return 0;
}
//#include <stdio.h>
//#include <string.h>

//int main(int argc, const char * argv[])
//{
//    int result;

//    char example1[10];
//    char example2[10];
//    printf("enter 1 the string\n");
//    scanf("%sj ",example1);
//    printf("enter the 2 string\n");
//    scanf("%s",example2);

//    //    strcpy(example1, "C programming at TechOnTheNet.com");
//    //    strcpy(example2, "C programming is fun");


//    result = strcmp(example1, example2);


//    if (result == 0) printf("Strings are the same\n");

//    if (result < 0) printf("Second string is less than the first\n");

//    else printf("first  string is less than the second \n");

//    return 0;
//}

