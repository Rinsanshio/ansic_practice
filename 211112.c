//
// Created by 梁思远 on 2021/11/14.
//
#include <stdio.h>


int main()
{
    int theDayBefore();
    int theLast;
    theLast = 1;
    printf("第10天有%d个桃\n",theLast);
    theDayBefore(theLast);
    return 0;
}

int theDayBefore(int num)
{
    static int flag = 9;
    if(flag!=0)
    {
        num = (num+1)*2;
        printf("第%d天有%d个桃\n",flag,num);
        flag--;
        return theDayBefore(num);
    }
    else
        return 1;
}