// To read a string and find its length without using library functions
#include<stdio.h>
#define max 100
int main()
{
    char str[max];
    int i;
    printf("Enter string:");
    gets(str);
    for( i = 0; str[i] != '\0'; i++);
    printf("Lenth : %d\n",i);
    return 0;
}