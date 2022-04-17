#include<stdio.h>
#include<string.h>

int main(void)
{
    char name[40];
    int i=0;

    do{
        i++;
        printf("iteration #%d \n",i);
        printf("do u want to quit enter No: ");
        scanf("%s",name);
    }while(strcmp(name,"No")!=0);

    
    return 0;
}