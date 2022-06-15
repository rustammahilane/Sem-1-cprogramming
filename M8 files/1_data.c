/*program to read data from the keyboard; write it in a file called DATA.txt
Again read and write the same data from the file and display it on the screen. */
#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char data[1000];        // enough character to be in txt file
    printf("Enter data : ");
    gets(data);
    // writing file
    fp = fopen("DATA.txt","w");
    if(fp == NULL){
        printf("file not opened.\n");
    }
    else{
        printf("File opened in 'w' mode.\n");
        fputs(data,fp);
        printf("Data copied in file.\n");
        fclose(fp);
        printf("File closed.\n");
    }
    // reading and writng file (r+)
    fp = fopen("DATA.txt","r+");
    if(fp == NULL){
        printf("file not opened.\n");
    }
    else{
        printf("File opened in 'r+' mode.\n");
        printf("Data in file:\n");
        char ch;
        while((ch = fgetc(fp)) != EOF)
        putchar(ch);
        fclose(fp);
        printf("\nFile closed.\n");
    }
    return 0;
}