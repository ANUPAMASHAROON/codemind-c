#include<stdio.h>
int main()
{
    long int i,n;
    int k=0,b;
    scanf("%ld",&n);
    for(i=n;i>0;i=i/10)
    {
        b=i%10;
        k++;
    }
    if(k==10)
    printf("Valid");
    else
    printf("Invalid");
}