#include<stdio.h>

int main(void)
{
    printf("enter any interger number:");
    int number;
    scanf("%d",&number);

    switch (number)
    {
    case 1:
            printf("u have entered number one");
        break;
    case 10:
        printf("u have entered number ten");
        break;
    case 64:
        printf("u have entered number sixty-four");
        break;
    
    default:
        printf("u have not entered the number among 1,10,64");
        break;

    return 0;
    }

}