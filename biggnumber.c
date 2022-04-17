#include<stdio.h>

int main(void)
{
    printf("enter 1st integer number");
    int num1;
    scanf("%d",&num1);

     printf("enter 2nd integer number");
    int num2;
    scanf("%d",&num2);

    if(num1 > num2)
    {
        printf("num1 is bigger");
    }
    else if(num1 < num2)
    {
        printf("num2 is bigger");
    }
    else if(num1 == num2)
    {
        printf("num1 & num2 are equal");
    }

    return 0;
}