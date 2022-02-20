//
// Created by 梁思远 on 2021/11/29.
//
#include <stdio.h>
#include <string.h>
#define SIZE 100
int main()
{
    char str1[SIZE],str2[SIZE];
    char *p[20];
    char *temporary;
    int i = 0,j;
    const char s[2]={" "};
    printf("Please enter a sentence\n");
    fgets(str1,SIZE,stdin);
    strncpy(str2,str1, strlen(str1)-1);
    p[i] = strtok(str2,s);
    while (p[i]!= NULL){
        i++;
        p[i] = strtok(NULL,s);
    }
    for (int l = 0; l < i; ++l) {
        for (int m = 0; m < (i-1); ++m) {
            j = strcmp(p[m],p[m+1]);
            if(j>0){
                temporary = p[m];
                p[m] = p[m+1];
                p[m+1] = temporary;
            }
                }
    }
    for (int k = 0; k < i; ++k) {
        printf("%s ",p[k]);
    }
    return 0;
}
