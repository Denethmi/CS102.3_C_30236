#include<stdio.h>
int main()
{
    float cel,fah;

    printf("Enter the Temperature in Fahrenheit degree=");
    scanf("%f",&fah);

    cel=(5.0/9.0)*(fah-32);

    printf("The Temperature is %f\n",cel);
}

