#include<stdio.h>
int main()
{
    int no,i;
    int factorial=1;

    printf("Enter a number");
    scanf("%d",&no);

    if(no<0)
    {
        printf("Factorial of %d is &d\n",no,1);
    }
    else
    {
        for(i=1;i<=no;i++)
        {
            factorial *=i;
        }
        printf("Factorial of %d is &d\n",no,factorial);
    }
    return 0;
}
