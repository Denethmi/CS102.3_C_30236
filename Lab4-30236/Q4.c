#include <stdio.h>
int main ()
{
    char ch;

    printf("Enter a character");
    scanf("%c",&ch);

    switch(ch)
    {
         case 'a': printf("a is a vowel");break;
         case 'e': printf("e is a vowel");break;
         case 'i': printf("i is a vowel");break;
         case '0': printf("o is a vowel");break;
         case 'u': printf("u is a vowel");break;
         case 'A': printf("a is a vowel");break;
         case 'E': printf("e is a vowel");break;
         case 'I': printf("i is a vowel");break;
         case 'O': printf("o is a vowel");break;
         case 'U': printf("u is a vowel");break;
         default: printf("%c is not a vowel",ch);
    }
}

