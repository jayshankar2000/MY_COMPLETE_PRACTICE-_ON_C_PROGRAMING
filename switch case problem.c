#include<stdio.h>
int main()
{
   char ch;
   printf("\n please enter any charater: ");
   scanf("%c",&ch);
   switch(ch)
   {
       case 'A':
       case 'a':
            printf("\n %c is a vowel",ch);
            break;
       case 'E':
       case 'e':
           printf("\n %c is a vowel",ch);
           break;
       case 'I':
       case 'i':
           printf("\n %c ia a vowel",ch);
            break;
       case 'O':
       case 'o':
           printf("\n %c is vowel",ch);
            break;
       case 'U':
       case 'u':
           printf("\n %c is a vowel",ch);
           break;
       default:printf("\n%c ia not vowel",ch);


   }
      return 0;
}
