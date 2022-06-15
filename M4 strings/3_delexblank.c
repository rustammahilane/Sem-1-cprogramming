// Program to delete extra blank spaces in a string
#include <stdio.h>
#include <string.h>
#define max 100
int main()
{
    char str[max];
    printf("Enter string :");
    gets(str);
    for(int k = 0; str[k] != '\0'; k++){
         // tab is replaced with single blank space
        if(str[k] == '\t')
            str[k] = ' ';
    }
    // loop to operate array elements
    for(int i = 0; str[i] != '\0'; i++){
       
        // loop executed while there is an extra blank space
        while (str[i] == ' ' && str[i+1] == ' '){
            // loop to shift array to left
            for(int j = i + 1; str[j] != '\0'; j++){
                str[j] = str[j+1];
            }
            // reducing the length of string
            str[strlen(str)] = '\0';
        }
    }
    printf("Modified string :");
    puts(str);
    return 0;
}