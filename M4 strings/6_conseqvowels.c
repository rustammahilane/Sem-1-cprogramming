// To find all the consecutive occurrence of vowels
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define max 100
int main()
{
    char str[max], s[max];
    int len;
    printf("Enter string:");
    gets(str);
    len = strlen(str);
    // loop to store str in s in lowercase
    for(int k = 0; k < len ;k++)
        s[k] = tolower(str[k]);
    s[len] = '\0';
    //loop to compare string characters
    for (int i = 0; s[i] != '\0'; i++)
    {   
        int count = 0;      //to store no of vowel
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
            count=1;
            for(int k = i+1; k < len; k++){     //loop to check consecutive vowel
                if(s[k] != s[i])
                break;
                else
                count++;
            }
            if(count>1){    
                for(int l = i; l < i+count; l++)
                printf("%c",str[l]);
                printf("\n");
            }
            i += count;  //incrementing value of i by count
        }
    }
    return 0;
}