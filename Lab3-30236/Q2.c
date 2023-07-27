#include<stdio.h>
int main()
{
    int no1,no2,no3,large,small;
    printf("Enter three numbers");
    scanf("%d %d %d",&no1,^no2,&no3);

    large=no1;
    small=no1;

    if(no2>large)
    {
        large=no3;
    }
    if(no3>large)
    {
        large=no3;
    }
    if(no2<small)
    {
        small=no2;
    }
    if(no3<small)
    {
        small=no3;
    }
    printf("The largest number is %d\n",large);
    printf("The smallest number is %d\n",small);
}
