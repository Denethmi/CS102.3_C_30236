#include <stdio.h>
int main ()
{
    int op1,op2;
    operator;

    scanf("%d%d",&op1,&op2);

    switch(operator)
    {
      case '+': printf("=%d", op1+op2);break;
      case '-': printf("=%d", op1-op2);break;
      case '*': printf("=%d", op1*op2);break;
      case '/': printf("=%d", op1/op2);break;
      default: printf("Operator is invalid");
    }
}


