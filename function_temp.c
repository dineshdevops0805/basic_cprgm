#include<stdio.h>



float temp_convert(float tempF)
{
    float tempc=(tempF-32.0)*5.0/9.0;
    return tempc;
}
int main(void)
{
    puts("temperature conversion table");
    puts("----------------------------");

    for(float tempF=10.0;tempF<100;tempF+=5){
        float tempc = temp_convert(tempF);

        printf("%.1f F   | %5.1f C\n",tempF,tempc);
    }
    puts("----------------------");
    return 0;
}