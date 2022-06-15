// program to append the content of a file at the end of
// another without using append mode
#include<stdio.h>
int main()
{
    FILE *f;
    char file[30];
    printf("Enter file name: ");
    gets(file);
    f = fopen(file, "r+");
    if(f == NULL)
    printf("File not opened.\n");
    else{
        printf("File opened.\n");
        fseek(f,0,SEEK_END);
        printf("Enter data you want to append(0 to terminate):\n");
        char ch;
        while(1){
            scanf("%c",&ch);
            if(ch == '0')
            break;
            fprintf(f,"%c",ch);
        }
        fclose(f);
        printf("File closed.\n");
    }
}