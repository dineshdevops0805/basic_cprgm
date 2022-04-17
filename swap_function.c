#include<stdio.h>

void swap_val(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;


}

int main()
{
    int a1=10;
    int b1=20;
    printf("values before swap a is %d;b is %d",a1,b1);
    swap_val(&a1,&b1);
    printf("\nvalues after swap a is %d;b is %d",a1,b1);
    return 0;
}

  
