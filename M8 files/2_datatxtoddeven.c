/* A file named DATA.txt contains a series of integers.
   write a program to read these numbers and then 
   write all odd numbers to a file called ODD and all even
   numbers to a file called EVEN. */
#include<stdio.h>
int main()
{
    FILE *f,*fe,*fo;
    int c;
    f = fopen("DATA.TXT", "r");
    if(!f)
    printf("Cannot open DATA.txt.");
    else{
        printf("DATA.txt file opened.\n");
        fe = fopen("EVEN.txt", "w");
        fo = fopen("ODD.txt", "w");
        while((fscanf(f,"%d",&c)) != EOF){
            if((c%2) == 0)
            fprintf(fe,"%d\n",c);
            else
            fprintf(fo,"%d\n",c);
        }
        printf("Numbers sorted into EVEN.txt and ODD.txt\n");
        fclose(f);
        fclose(fo);
        fclose(fe);
        printf("files closed.\n");
    }
}
