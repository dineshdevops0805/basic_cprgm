#include<stdio.h>
#include<string.h>

int main(void){

    char str[]="sathya";
    int len=0;

    while(str[len] != '\0'){
        len++;
    }
    printf("string is:%s",str);
    printf("\nlen is:%d",len);

    int x=Add(5,6);
    printf("%d",x);

    return 0;
}

int Add(int x,int y)
{
    return x+y;
}

