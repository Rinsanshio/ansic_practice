//
// Created by 梁思远 on 2021/10/22.
//
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


char card1[2],card2[2],card3[2],inChar;
int val1,val2,val3,sum;

int trans(char a[2])
{   scanf("%s",a);
    switch (a[0]) {
        case 'J':
        case 'j':
        case 'Q':
        case 'q':
        case 'K':
        case 'k':
        case '1':
            return 10;

        case 'A':
        case 'a':
            return 11;

        default:
            return atoi(a);
    }
}

void calculate() //21点的处理
{
    printf("请输入三张牌\n");
    val1=trans(card1);
    val2=trans(card2);
    val3=trans(card3);
    sum = val1+val2+val3;

    if(sum>21&&val1==11||val2==11||val3==11)
    {
        sum-=10;
        if(sum>21)
            sum-=10;
    }
    printf("总分数为%d",sum);
}

int main()
{
    do
    {
        calculate();
        printf("\n输入S停止计算点数，输入其他字符继续计算\n");
        getchar();// getchar清除trans函数输入的回车缓存
        inChar = getchar();
        inChar = tolower(inChar);
        getchar();
    }
    while (inChar != 's');
    return 0;
}