#include<stdio.h>
int main()
{
    int no,counter=1,total=o;
    float avg;
    while(counter<=10)
    {
        printf("Enter %d number",counter);
        scanf("%d",&no);

        total=total+no;
        counter++;
    }
    avg=(float)total/10.o;

    printf("The total is %d\n",total);
    printf("The average is %.2f\n",avg);

    if(avg<50)
    {
        printf("Fail!\n");
    }
    else
    {
        printf("Pass!\n");
    }
return 0;
}
