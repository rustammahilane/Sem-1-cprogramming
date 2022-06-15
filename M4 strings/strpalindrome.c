//to reverse a string and check whether string is palindrome or not
#include<stdio.h>
#include<string.h>
#define max 100
int main()
{
    char str[max],revstr[max];
    int is_palindrome = 0;
    // string initialization
    printf("Enter string:");
    gets(str);
    // copying str into revstr
    for(int i = 0; str[i] != '\0'; i++)
    revstr[i]  = str[i];
    //swaping
    for(int i = 0; i < strlen(revstr)/2; i++){
        char temp = revstr[i];
        revstr[i] = revstr[strlen(revstr)-1-i];
        revstr[strlen(revstr)-1-i] = temp;
    }
    // comparing str and revstr
    for(int i = 0; str[i] != '\0'; i++){
        is_palindrome = 1;
        if(revstr[i] != str[i]){
            is_palindrome = 0;
            break;
        }
    }
    printf("Reverse of string:");
    puts(revstr);
    if(is_palindrome == 0)
        printf("String is not palindrome.");
    else
        printf("String is  palindrome.");
    return 0;
}