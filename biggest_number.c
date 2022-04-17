#include<stdio.h>
int main(void)
{
    int a,b,c;
    printf("enter a,b,c values:");
    scanf("%d%d%d",&a,&b,&c);

    if ((a>b) &&( a>c))
    {
        printf("a is the biggest number and a value is:%d",a);
    }
    else if(b>c)
    {
       printf("b is the biggest number and a value is:%d",b); 
    }
    else
    {
        printf("c is the biggest number and a value is:%d",c);
    }

    return 0;
}