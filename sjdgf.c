#include "stdio.h"

int main()
{
    int count =0;
    float total =0 ;
    char choice;
    char subject[50];
    float score=0;
    int tong =0 ;
    do
    {
        printf("Nhap do uong:");
        scanf("%s", &subject);
        printf("menh gia :");
        scanf("%d", &score);
        total+=score;
        count++;



        printf("ban co muon tiep tuc khong (y/n):  \n");
        scanf(" %c",&choice);


    } while (choice=='y'||choice=='Y');
    if(count>0)
    {
       double tong = total ;

        printf("tong so tien cua ban la %d:",tong);

    }else{
        +
                printf("loi moi nhap lai du lieu");

    }


    return 0;
}

