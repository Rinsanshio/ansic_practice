#include <stdio.h>
struct Scorelib
{
    int studentID;
    char name[20];
    double score;
}lib[114],templib;
void Readfile(FILE* file)
{   
    int i = 0;
    fread(lib,sizeof(struct Scorelib),114,file);
    printf("\nStudentID\tName\tScore\n");
    while(lib[i].studentID!=0){
        printf("%d\t\t%s\t%.2lf\n",lib[i].studentID,lib[i].name,lib[i].score);
        i++;
    }
}
void Writefile(FILE* file)
{
    char flag = '0';
    do{
        printf("\nPlease enter the additional information.\n");
        scanf("%d %s %lf",&templib.studentID,templib.name,&templib.score);
        fwrite(&templib,sizeof(struct Scorelib),1,file);
        printf("\nEnter 1 to add more information.\n");
        scanf("\n%c",&flag);
    }
    while(flag=='1');   
}
int main()
{
    int flag = 0;
    FILE *file = fopen("scorelib.bin","ab+");
    printf("\nThe file has been successfully opened.");
    Readfile(file);
    printf("\nDo you want to add information? If yes, please enter 2, if no, please enter other numbers.\n");
    scanf("%d",&flag);
    if(flag=2)
        Writefile(file);
    fclose(file);
    return 0;
}


