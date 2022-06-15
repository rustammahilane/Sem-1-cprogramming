//program to replace lowercase characters by uppercase and vise versa
#include<stdio.h>
#include<ctype.h>
#define max 100
int main()
{
    char str[max];
    printf("Enter string: ");
    gets(str);
    // loop to convert characters
    for(int i = 0; str[i] != '\0'; i++){
        // upper to lower
        if (isupper(str[i]))
        str[i] = tolower(str[i]);
        // lower to upper
        else
        str[i]  = toupper(str[i]);
    }
    printf("Replaced string: ");
    puts(str);
    return 0;
}