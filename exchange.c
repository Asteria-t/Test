#include<stdio.h>

int main ()
{
    int a=424;
    int b=532;
    a=a^b;
    b=a^b;
    a=a^b;
    printf("%d,%d",a,b);
    return 0;
}