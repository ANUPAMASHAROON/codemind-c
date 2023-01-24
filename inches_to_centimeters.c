#include<stdio.h>
int main()
{
    float ht,cm;
    scanf("%f%f",&ht,&cm);
    cm=2.54*ht;
    printf("%0.2f",cm);
}