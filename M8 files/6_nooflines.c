//program to find the number of line in  a text file
#include<stdio.h>
#define max 20
int main()
{
    FILE *f;
    char file[max];
    printf("Enter file name: ");
    gets(file);
    f = fopen(file, "r");
    if(f == NULL)
    printf("File not opened.\n");
    else{
        printf("File opened.\n");
        unsigned int line = 1;
        char ch;
        while((ch = getc(f)) != EOF){
            if(ch == '\n')
            line = line +1;
        }
        fclose(f);
        printf("File closed.\n");
        printf("No of lines in file: %u\n", line);
    }
    return 0;
}