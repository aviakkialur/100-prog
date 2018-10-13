#include<stdio.h>

int main(){
    int num,r,sum,t;
    for(num=1;num<=500;num++){
         t=num;
         sum = 0;
         while(t!=0){
             r=t%10;
             t=t/10;
             sum=sum+(r*r*r);
         }
         if(sum==num)
             printf("%d ",num);
    }
    return 0;
}
