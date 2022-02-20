//
// Created by 梁思远 on 2021/10/2.
//
#include <stdio.h>
int main()
{
    double fa;
    printf("Please enter the Fahrenheit temperature\n");
    scanf("%lf",&fa);
    fa = 5*(fa - 32)/9;
    printf("The corresponding Celsius temperature is %.2f",fa);
    return 0;
}

