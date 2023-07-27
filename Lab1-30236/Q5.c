#include<stdio.h>
int main()
{
    int num1,num2,total;
    float average;

    printf("Enter First Number=");
    scanf("%d",&num1);
    printf("Enter Second Number=");
    scanf("%d",&num2);

    total=num1+num2;
    average=(total/2);

    printf("Total=%d\n",total);
    printf("Average=%f\n",average);

    return 0;
}
