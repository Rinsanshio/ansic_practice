//
// Created by 梁思远 on 2021/10/21.
//
#include <stdio.h>
#include <math.h>

int main()
{
    double a,b,c,s,area;
    int flag;
    printf("请输入三边边长");
    scanf("%lf %lf %lf",&a,&b,&c);
    s = 0.5*(a+b+c);

    if(a + b > c && a + c > b && b + c > a)
        flag = 1;
    else
        flag = 0;

    if(flag)
        {area = s*(s-a)*(s-b)*(s-c);
        printf("面积为%.2lf", sqrt(area));}
    else printf("false");
    return 0;
}
