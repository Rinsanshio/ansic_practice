//
// Created by 梁思远 on 2021/10/21.
//
#include <stdio.h>
int main()
{
    printf("请输入三张牌");
    char a,b,c,d;
    int sum;
    scanf("%c %c %c",&a,&b,&c);
    if(b == 48)
        b = c;
    if(c == 48)
        {scanf("%c",&d);
         c = d;}

    switch (a)
    {
    case 74:
    case 81:
    case 75:
    case 49:
        a = 10;
        break;
    case 65:
        a = 11;
    }

    if(a>=50&&a<=57)
    {
        a-=48;
    }

    switch (b)
    {
     case 74:
     case 81:
     case 75:
     case 49:
         b = 10;
         break;
     case 65:
         b = 11;
    }

    if(b>=50&&b<=57)
    {
        b-=48;
    }

    switch (c)
    {
    case 74:
    case 81:
    case 75:
    case 49:
        c = 10;
        break;
    case 65:
        c = 11;
    }

    if(c>=50&&c<=57)
    {
        c-=48;
    }

    sum = a+b+c;

    if(sum>21&&a==11||b==11||c==11)
    {
        sum-=10;
        if(sum>21)
            sum-=10;
    }
    printf("%d\n",sum);
    printf("%d,%d,%d",a,b,c);
}
