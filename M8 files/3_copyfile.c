// copy the content of one file into another
#include<stdio.h>
int main()
{
    FILE *f, *fc;
    f = fopen("DATA.txt","r");
    if(!f)
        printf("Cannot open source file.");
    else{
        printf("File DATA.txt opened.\n");
        fc = fopen("DATACOPY.txt", "w");
        char c;
        while((c = getc(f)) != EOF){
            putc(c, fc);
        }
        printf("Copied to DATACOPY.txt\n");
        fclose(fc);
        fclose(f);
        printf("Files closed.\n");
    }
    return 0;
}