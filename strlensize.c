#include<stdio.h>
#include<string.h>
int main()
{
    printf("enter the string:");

    char strng[40];
    scanf("%s",strng);
    int len=strlen(strng); 
    int size =sizeof(strng);
    printf("\nlength=%d;size=%d\n",len,size);

    return 0;

}