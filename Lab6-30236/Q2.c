#include<stdio.h>
int main()
{
    int i,marks[10],max,min,total=0;
    float avg;

    printf("Enter the marks of 10 students\n");

    max=marks;
    min=marks;
    for(i=0;i<10;i++)
    {
        printf("Enter marks for students %d: ",i+1);
        scanf("%d",&marks[i]);
        total+=marks[i];
        if(i==0||marks[i]>max)
        {
            max=marks[i];
        }
        if(min>marks[i])
        {
            min=marks[i];
        }
    }
    avg=(float)total/10;
    printf("The maximum number is %d\n",max);
    printf("The minimum number is %d\n",min);
    printf("The average is %.2f\n",avg);

    return 0;
}
