//if condition
#include<stdio.h>
int main()
{
    int no,ans;

    printf("Enter the number");
    scanf("%d",&no);

    ans=no%2;
    if(ans==0)
        printf("%d is an even number\n",no);
    else
        printf("%d is an odd number\n",no);
}

//switch statement
#include<stdio.h>
int main()
{
    int no;

    printf("Enter a number");
    scanf("%d",&no);

    switch(number%2)
    {
        case 0:printf("%d is an even number\n",no);break;
        case 1:printf("%d is an odd number\n",no);break;
    }

}
