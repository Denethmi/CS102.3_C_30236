#include<stdio.h>
int main()
{
    int birthyear,currentyear,age;
    char name[50];

    printf("Enter your name=");
    scanf("%s",&name);
    printf("Enter your birth year=");
    scanf("%d",&birthyear);
    printf("Enter current year=");
    scanf("%d",&currentyear);

    age=(currentyear-birthyear);

    printf("Name is %s\n",name);
    printf("Age is %d\n",age);
      return 0;
}

