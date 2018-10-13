#include <stdio.h>
int sum(int a,int b, int c, int d,int e,int f){
    int z;
    z=a+b+c+d+e+f;
    return z;
}

struct std
{
    char name[10];
    int kan;
    int eng;
    int mat;
    int sci;
    int hin;
    int ss;
}
s[10];
int main()
{
    struct std;
    int i,n,j;
    for(i=0;i<=10;i++)
    {
        printf("name of the student\n");
        scanf("%s",s[i]);
        printf("kannada:=");
        scanf("%d",&s[i].kan);
        printf("english:=");
        scanf("%d",&s[i].eng);
        printf("hindi:=");
        scanf("%d",&s[i].hin);
        printf("maths:=");
        scanf("%d",&s[i].mat);
        printf("scince:=");
        scanf("%d",&s[i].sci);
        printf("social scince:=");
        scanf("%d",&s[i].ss);
        n=sum(s[i].kan,s[i].eng,s[i].hin,s[i].mat,s[i].sci,s[i].ss);
        printf(" total:%d\n",n);
        j=(n/6);
        printf("avrage:=%d\n\n\n",j);
    }

    return 0;
}
