#include<stdio.h>
int main()
{
    int no,counter=0,n=0,p=0,z=0;

    for(counter;counter<10;counter++)
    {
        printf("Enter number: ");
        scanf("%d",&no);
        if(no==0)
        {
            z++;
        }
        else if(no<0)
        {
            n++;
        }
        else
        {
            p++;
        }
    }
    printf("Total number of positive numbers %d\n",p);
    printf("Total number of negatives numbers %d\n",n);
    printf("Total number of zeros %d\n",z);
}
