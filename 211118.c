//
// Created by 梁思远 on 2021/11/22.
//
#include <stdio.h>
#define row 4
#define column 4
int main()
{
    int matrix[row][column];
    printf("Please enter a %d by %d matrix\n",row,column);
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < column; ++j)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    for (int i = 0; i < row; ++i)
    {
        printf("\n");
        for (int j = 0; j < column; ++j)
        {
            printf("%d\t",matrix[j][i]);
        }
    }
    return 0;
}
