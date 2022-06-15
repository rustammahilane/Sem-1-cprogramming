/* write a fuction for the following string operations
    catenation, comparison, length, copy, reverse. */
#include<stdio.h>
#include<string.h>
void menu();
void copy(char *s1, char *s2){
    strcpy(s1,s2);
}
void concat(char *s1, char *s2){
    strcat(s1,s2);
}
int length(char *s1){
    int c = 0;
    while(s1[c] != '\0')
        c++;
    return c;
}
int compare(char *s1, char *s2){
    int f;
    f = strcmp(s1,s2);
    return f;
}
void reverse(char *s1){
    strrev(s1);
}
int main()
{
    char str1[50];
    char str2[50];
    printf("Enter string 1:");
    gets(str1);
    printf("Enter string 2:");
    gets(str2);
    menu();
    int again = 1;
    int choice;
    do{
        printf("Enter choice:");
        scanf("%d",&choice);
        switch (choice){
            case 1:
                printf("Length\n");
                printf("str1 length: %d\n", length(str1));
                printf("str2 length: %d\n", length(str2));
                break;
            case 2:
                printf("copied\n");
                copy(str1,str2);
                printf("str1 : %s\n", str1);
                printf("str2 : %s\n", str2);
                break;
            case 3:
                printf("concatenation\n");
                concat(str1,str2);
                printf("str1 : %s\n", str1);
                printf("str2 : %s\n", str2);
                break;
            case 4:
                printf("Compare str1 and str2 : %d\n", compare(str1,str2));
                break;
            case 5:
            printf("reverse\n");
                reverse(str1);
                reverse(str2);
                printf("str1 : %s\n", str1);
                printf("str2 : %s\n", str2);
                break;
            default:
                if(choice < 1 && choice > 5)
                printf("Invalid choice!\n");
                break;
        }
            printf("Again ? 1/0 : ");
            scanf("%d",&again);
    } while (again == 1);
    return 0;  
}
void menu(){
    printf("1. Length\n");
    printf("2. Copy\n");
    printf("3. Concate\n");
    printf("4. Compare\n");
    printf("5. Reverse\n");
}
