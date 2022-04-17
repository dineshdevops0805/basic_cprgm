#include<stdio.h>
#include<string.h>

int main(void)
{
    printf("what is ur name:");

    char name[40];
    scanf("%s",name);

    printf("\n");
    printf("Hi,Nice to meet u! %s\n",name);
    return 0;
}