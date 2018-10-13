//67. C Program to read data in 3 structures and print
#include <stdio.h>
struct name
{
    char name[50];
    int rno;
    float marks;
}
s[3];
int main()
{
    struct stu;
    int i;
    for(i=0;i<=3;i++)
    {
        printf("enter the name  \n");
        scanf("%s",&s[i].name);
        printf("enter the r no\n");
        scanf("%d",&s[i].rno);
        printf("enter the matks ");
        scanf("%f",&s[i].marks);

    printf(" the name %s \n",s[i].name);
    printf("the r no %d\n",s[i].rno);
    printf("enter the matks %f\n",s[i].marks);
}
return 0;
}
