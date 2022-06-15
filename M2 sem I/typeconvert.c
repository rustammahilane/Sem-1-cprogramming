//write a program to read a character and print its decimal,octal,hexadecimal equivalent
#include<stdio.h>
int main()
{   char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    printf("decimal equivalent of %c is %d",ch,ch);
    printf("\noctal equivalent of %c is %o",ch,ch);
    printf("\nhexadecimal equivalent of %c is %x",ch,ch);
    return 0;
}