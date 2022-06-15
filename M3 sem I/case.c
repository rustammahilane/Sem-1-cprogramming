/*
 to determine whether a character is in lowercase, uppercase, digit or special character.
*/
 #include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    if (ch>= 'a' && ch<= 'z')
    printf("Entered character %c is in lowercase.",ch);
    else if (ch<= 'Z' && ch>='A')
    printf("Entered character %c is in uppercase.",ch);
    else if (ch<= '9' && ch>='0')
    printf("Entered character %c is a digit.",ch);
    else
    printf("Entered character %c is special character",ch);
    return 0;
}