#include<stdio.h>
int main()
{
    int base,exponent,result=1;

    printf("Enter the base");
    scanf("%d",&base);
    printf("Enter the exponent");
    scanf("%d",&exponent);

    for(int i=1;i<=exponent;i++)
    {
        result=result*base;
    }
    printf("Result: %d\n",result);

    return 0;
}
