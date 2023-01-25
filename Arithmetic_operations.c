#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int Sum,Difference,Product,Quotient,Remainder;
    Sum=a+b;
    printf("Sum:%d
",Sum);
    Difference=a-b;
    printf("Difference:%d
",Difference);
    Product=a*b;
    printf("Product:%d
",Product);
    Quotient=a/b;
    printf("Quotient:%d
",Quotient);
    Remainder=a%b;
    printf("Remainder:%d",Remainder);
}