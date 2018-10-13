#include<stdio.h>
int sum(int a,int b,int c){
    int z;
    z=a+b+c;
    return z;
}
        struct student
        {
         char name[20];
          int kan;
          int eng;
          int mat;
        };
            int main()
        {
             struct student s[10];
             int i,n;
             for(i=0;i<=2;i++)
                 { printf("\nenter the student name\n");
                    scanf("%s",s[i]);
                        printf("\nEnter Marks in Three Subjects =\n ");
                        scanf("%d%d%d",& s[i].kan,&s[i].eng,&s[i].mat);
                        n=sum(s[i].eng,s[i].kan,s[i].mat);
                        printf("\nTotal marks of s[%d] Studeint= %d",i,n);
                 }
                        return 0;
         }
