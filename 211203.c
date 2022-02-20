//
// Created by 梁思远 on 2021/12/5.
//
#include <stdio.h>
#include <stdlib.h>
FILE *OpenFile()
{
    FILE *text;
    char filename[20] = "LittleStar.txt";
    text = fopen(filename,"r");
    if(text == NULL)
    {
        printf("\nThe file is not exist.\n");
        exit(1);
    }
    printf("\nThe file has been successfully opened for reading.\n");
    return text;
}

void Trans(FILE* file)
{
    char temp;
    temp = fgetc(file);
    while(temp != EOF)
    {
        if(temp == '\n')
        {
            fseek(file,-1,SEEK_CUR);
            fputc('\r',file);
            fseek(file,2,SEEK_CUR);
        }
        else
            temp = fgetc(file);
    }
    fclose(file);
}

int main()
{
    Trans(OpenFile());
    return 0;
}
