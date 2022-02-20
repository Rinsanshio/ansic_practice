//
// Created by 梁思远 on 2021/10/18.
//
#include<stdio.h>
int main()
{
    double y;
    int yi,flag;
    printf("Please enter a year");
    start:
    scanf("%lf",&y);
    yi = (int)y;
    flag = 0;
    if (y-yi==0 && y>0)
    {
        if(yi%400==0)
        {
            flag++;
        }
        else{
            if(yi%100!=0&&yi%4==0)
            flag++;
        }
    }
    else
    {
        printf("Please enter a right year");
        goto start;
    }
    switch(flag)
    {
        case 0:
            printf("It's not a leap year");
            break;
        case 1:
            printf("It's a leap year");
    }
    return 0;
}
