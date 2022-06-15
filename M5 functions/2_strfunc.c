//Menu driven program to calculate string length, copy string,
//compare string using function
#include<stdio.h>
#include<string.h>
char str1[50],str2[50];     //global declaration
void length(){
    printf("Input string: ");
    gets(str1);
    printf("String length: %d", strlen(str1));
}
void copy(){
    printf("Enter string 1 :");
    gets(str1);
    strcpy(str2,str1);
    printf("Copied string 2 is: %s",str2);
}
void compare(){
    printf("Enter string 1 :");
    gets(str1);
    printf("Enter string 2 :");
    gets(str2);
    printf("Comparison of str1 to str2: %d", strcmp(str1,str2));
}
int main()
{ 
    int choice;
    printf("Menu\n");
    printf("1. Find lenght of a string\n");
    printf("2. Copy a string to the other string\n");
    printf("3. Compare two strings\n");
    printf("Input choice: ");
    scanf("%d\n",&choice);
    switch (choice)
    {
    case 1:
        length();
        break;
    case 2:
        copy();
        break;
    case 3:
        compare();
        break;
    default :
        printf("Invalid choice!");
        break;
    }
    return 0;
}
