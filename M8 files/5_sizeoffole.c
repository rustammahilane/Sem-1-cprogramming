//program to find the size of the file using file handling functions
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
        unsigned int size;
        fseek(f, 0, SEEK_END);
        size = ftell(f);
        fclose(f);
        printf("File closed.\n");
        printf("file size : %u", size);
    }
    return 0;
}