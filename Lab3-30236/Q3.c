#include<stdio.h>
int main()
{
    char empname[30];
    float ns,bs,inc;

    //input
    printf("Enter employee name");
    scanf("%s",&empname);
    printf("Enter basic salary");
    scanf("%f",&bs);

    //process
    if(bs>=10000)
        inc=bs*0.15;
    else if(bs>=5000)
        inc=bs*0.10;
    inc=bs*0.05;

    ns=bs+inc;

    //output
    printf("Employee name %s\n",empname);
    printf("New salary %.2f\n",ns);

}
