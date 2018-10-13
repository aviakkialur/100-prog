#include <stdio.h>
struct hotel_infor
{
    char hotel_name[500];
    char hotel_grade[500];
    int room_rent;
    int  num_of_rooms;
};
int main()

{
    struct hotel_infor s[3];
    int i;
    for(i=0;i<=3;i++)
    {
         printf("enter the hotel name :  ");
         scanf("%s",&s[i].hotel_name);
         printf("grade of hotel :  ");
         scanf("%s",&s[i].hotel_grade);
         printf("room_rent of the hotel :  ");
         scanf("%d",&s[i].room_rent);
         printf(" number of rooms avilable in the hotel : ");
         scanf("%d",&s[i].num_of_rooms);
         printf("\n");
    }
    for(i=0;i<=3;i++)
    {
         printf(" hotel name : %s\n ",s[i].hotel_name);
         printf("grade of hotel :%s\n",s[i].hotel_grade);
         printf("room_rent of the hotel :%d\n",s[i].room_rent  );
         printf(" number of rooms avilable in the hotel : %d\n",s[i].num_of_rooms);

    }
    return 0;
}
