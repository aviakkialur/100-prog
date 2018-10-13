//3.) C Program To Accept Student Roll No, Marks in 3 Subjects and Calculate Total, Average and Print it.
#include <stdio.h>

int main()
{
    int  mat,sci,kan,rno,sum,avrage;
    printf("enter the roll number: \n");
    scanf("%d",&rno);
    printf("kan: \n");
    scanf("%d",&kan);
    printf("mat: \n");
    scanf("%d",&mat);
    printf("kan: \n");
    scanf("%d",&sci);
    sum=mat+sci+kan;
    printf("\nsum: %d",sum);
    avrage=sum/3;
    printf("\navrage: %d\n",avrage);
    return 0;
}
