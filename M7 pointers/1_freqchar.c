//program to count frequency of every character present in a line text
#include<stdio.h>
int main()
{
    char ch[50];
    int found[50];
    char *p;
    char *t;
    printf("Enter string: ");
    scanf("%[^\n]s",&ch);
    int i = 0;
    while(ch[i] != '\0'){
        int count = 0;
        p = &ch[i];
        //loop to check if the current character is counted earlier
        //if found; found = -1 to avoid counting it again
        for(int k = 0; k < i; k++){
            t = &ch[k];
            if(*p == *t)
            found[i] = -1;
        }
        if(found[i] != -1){
            int j = 0;
            //counting frequency of character
            while(ch[j] != '\0'){
                if(ch[j] == *p)
                count++;

                j++;
            }
            printf("%c : %d\n", ch[i],count);
        }
        i++;
    }
}