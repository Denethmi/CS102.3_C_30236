#include<stdio.h>
int main()
{
    int empno,counter=0;
    float bs;
    printf("Enter the employee number and basic salary(enter -999 to stop employee number)\n");

    while(1)
    {
        printf("Employee no: ");
        scanf("%d",&empno);

        if(empno==-999)
        {
            break;
        }
        printf("Basic Salary: ");
        scanf("%f",&bs);

        if(bs>=5000)
        {
            counter++;
        }
    }
    printf("The number of employee whose Basic Salary >=5000 is %d\n",counter);
    return 0;
}
