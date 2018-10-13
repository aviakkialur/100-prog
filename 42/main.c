//#include<stdio.h>
//int main(){
//    /* 2D array declaration*/
//    int disp[4][4][4];
//    /*Counter variables for the loop*/
//    int i, j,k;
//    for(i=0; i<4; i++) {
//        for(j=0;j<4;j++) {
//            for(k=0;k<=4;k++){
//                printf("Enter value for disp[%d][%d]:", i, j,k);
//                scanf("%d", &disp[i][j][k]);
//            }
//        }
//    }
//    //Displaying array elements
//    printf("Two Dimensional array elements:\n");
//    for(i=0; i<4; i++) {
//        for(j=0;j<4;j++) {
//            for(k=0;k<=4;k++){+
//                printf("%d ", disp[i][j][k]);
//                if(j==3){
//                    printf("\n");
//                }
//            }
//        }
//    }
//        return 0;
//    }

#include<stdio.h>
void main()
{
int i, j, k, x=1;
int arr[3][3][3];
printf(":::3D Array Elements:::\n\n");

for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        for(k=0;k<3;k++)
        {
        arr[i][j][k] = x;
        printf("%d\t",arr[i][j][k]);
        x++;
        }
        printf("\n");
    }
    printf("\n");
}
return 0;
}
