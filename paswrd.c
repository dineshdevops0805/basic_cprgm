#include<stdio.h>
#include<string.h>
int main()
{
    printf("enter the password:");
    char strng[40];
    scanf("%s",strng);

    if(strcmp(strng,"sathya")==0){
        printf("password is correct");
    }
    else
    {
        printf("password is wrong");
    }

    return 0;

}