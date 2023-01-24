#include<stdio.h>
int main()
{
    int s,t,b,capacity;
    scanf("%d%d%d%d",&s,&t,&b,&capacity);
    capacity=(2*s*t*b*512)/1024;
    printf("%d KB",capacity);
}