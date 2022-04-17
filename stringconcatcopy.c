#include<stdio.h>
#include<string.h>

int main(void)
{   
    printf("what is ur name:");
    char msg[100];
    char name[20];
    scanf("%s",name);
    strcpy_s(msg,sizeof(msg),name);
    strcat_s(msg,sizeof(msg),"\tis");
    strcat_s(msg,sizeof(msg),"\tlearning C.");
    printf(msg);

    return 0;


}