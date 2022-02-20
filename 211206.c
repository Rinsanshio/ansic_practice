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

FILE *WriteFile()
{
    FILE *text;
    char filename[20] = "LittleStar().txt";
    text = fopen(filename,"w+");
    return text;
}

void Trans(FILE* fileOpen,FILE* fileWrite)
{
    char temp;
    temp = fgetc(fileOpen);
    while(temp != EOF)
    {
        if(temp == '\n')
        {
            fputc('\r',fileWrite);
            fputc('\n',fileWrite);
            temp = fgetc(fileOpen);           
        }
        else
        {   
            fputc(temp,fileWrite);
            temp = fgetc(fileOpen);
        }
            
    }
    fclose(fileOpen);
    fclose(fileWrite);
}

int main()
{
    Trans(OpenFile(),WriteFile());
    return 0;
}
