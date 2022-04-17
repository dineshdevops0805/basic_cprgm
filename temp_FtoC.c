#include<stdio.h>

int main(void)
{
    float tempf;
    //float tempc;
    printf("enter the faranheit value:");
    scanf("%f",&tempf);
    float tempc=(tempf-34.0)*5.0/9.0;
    printf("the value from faranheit to celcious  is %2f\n",tempc);
    return 0;
}