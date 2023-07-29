#include <stdio.h>
int main()
{
    int empno,w,overtpayment,counter=0,totalemp=0;
    printf("Enter your employee number hours worked(enter-999 to stop employee number)\n");

    while(1)
    {
        printf("\nEnter Employee No: ");
        scanf("%d",&empno);
        if(empno==-999)
        {
            break;
        }
        printf("Enter Hours Work: ");
        scanf("%d",&w);
        totalemp++;
        if(w<=40)
        {
            overtpayment=0;
        }
        else
        {
            overtpayment=w-40;
            overtpayment=(overtpayment*150)+((40-w)*150);
        }
        if(overtpayment)
        printf("Employee No: ",empno);
        printf("Overtime payment: ",overtpayment);
        if(overtpayment>=4000)
        {
            counter++;
        }
        float percentage=((float)counter/totalemp)*100;
        printf("Percentage of employees with overtime payment exceeding Rs4000 : %.2f ",percentage);
    }
    return 0;
}

