#include<stdio.h>
int main()
{
    int no,digit,sum=0,temp=no;

    printf("Enter a number");
    scanf("%d",&no);

    while(temp!=0)
    {
        digit=temp%10;
        sum=sum+digit;
        temp/= 10;
    }
    printf("Sum of digits of %d: %d\n",no,sum);
return 0;
}
