#include<stdio.h>
int main()
{
    int counter,no=0,total=0;
    float prices[10],avg;

    printf("Enter 10 items prices\n");

    for(counter=0;counter<10;counter++)
    {
        printf("Enter prices for item %d :",counter+1);
        scanf("%f",&prices[counter]);
        total+=prices[counter];
        if(prices[counter]>200)
        {
            no++;
        }
    }
    avg=(float)total/10;
    printf("The average value id %.2f\n",avg);
    printf("The number of items which greater than 200 is %d\n",no);

    return 0;
}
