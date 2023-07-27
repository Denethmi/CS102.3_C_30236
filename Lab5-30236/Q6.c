#include<stdio.h>
int main()
{
    int no,reversedNo=0;

    printf("Enter a number");
    scanf("%d",&no);

    do
    {
        int digit = no % 10;
        reversedNo = reversedNo * 10+ digit;
        no=n0/10;
    }while(no!=10);

    printf("Reversed number: %d\n",reversedNo);

    return 0;
}
