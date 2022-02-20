//
// Created by 梁思远 on 2021/11/22.
//
#include <stdio.h>
#define row 4
#define column 4

void matrixIn(int *p)
{
    printf("Please enter a %d by %d matrix\n",row,column);
    for (int i = 0; i < row*column; ++i)
    {
        scanf("%d",p++);
    }
}

void matrixTrans(int *p,int *q)
{
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < column; ++j)
        {
            *(q+row*i+j) = *(p+row*j+i);
        }
    }
}

void matrixOut(int *p)
{
    for (int i = 0; i < row; ++i)
    {
        printf("\n");
        for (int j = 0; j < column; ++j)
        {
            printf("%d\t",*(p+i*column+j));
        }
    }
}

int main()
{
    int matrix[row][column];
    int matrixT[row][column];
    int *p,*q;
    p = matrix;
    q = matrixT;
    matrixIn(p);
    matrixTrans(p,q);
    matrixOut(q);
    return 0;
}
