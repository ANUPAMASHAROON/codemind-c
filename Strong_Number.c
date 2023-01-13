#include<stdio.h>
int main()
{
    int n,q,r,i,f=1,s=0;
    scanf("%d",&n);
    q=n;
    while(q!=0)
    {
        r=q%10;
        for(i=1;i<=r;i++)
        {
            f=f*i;
        }
        s=s+f;
        f=1;
        q=q/10;
    }
    if(s==n)
    printf("The number %d is a strong number",s);
    else
    printf("The number %d is not a strong number",n);
}