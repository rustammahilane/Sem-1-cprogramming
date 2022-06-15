// Program to delete all occurrence of a substring
// in a given a line of text
#include<stdio.h>
#include<string.h>
#define max 100
int main()
{
    char txt[max], sub[max];
    int txt_len, sub_len, temp_txt_len;
    printf("Enter text:");
    gets(txt);
    printf("Enter substring:");
    gets(sub);
    //when substring is present in text
    while(strstr(txt,sub) != NULL){
        txt_len = strlen(txt);      //length of text
        sub_len = strlen(sub);      //length of substring
        //temp_txt_len is length of strstr()
        temp_txt_len = strlen(strstr(txt,sub));
        
        //[txt_len - temp_txt_len] index of substring(first element) in text 
        for(int i = txt_len - temp_txt_len; txt[i] != '\0'; i++){
            //shifting string to left by 'length of substring'
            txt[i] = txt[i + sub_len];
        }
        
        /* reducing the text length by assgning null
            at position 'length of substring' from end */
        txt[txt_len - sub_len] = '\0';
    }
    printf("Modified text:");
    puts(txt);
    return 0;
}