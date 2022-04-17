#include<stdio.h>
#include<string.h>

int main(void)
{
    int i=64;


    while(i==64){
        printf("\nenter a value:(enter different value than 64 to quit: ");
        scanf("%d",&i);

        printf("\nu entered the value is :%d\n",i);
    }
    
    printf("**** loop is terminated ****");
    return 0;
}