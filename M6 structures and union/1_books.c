//Program to input and display book information
#include<stdio.h>
struct Book{
    unsigned long long int isbn;
    float price;
    char title[20];
    char author[30];
};
int main()
{
    struct Book b;
    printf("Enter book name: ");
    gets(b.title);
    printf("Enter author name: ");
    gets(b.author);
    printf("Enter ISBN: ");
    scanf("%lld",&b.isbn);
    printf("Enter price: ");
    scanf("%f",&b.price);
    printf("----------- BOOK DETAILS ----------\n");
    printf("Book   : %s\n", b.title);
    printf("Author : %s\n", b.author);
    printf("ISBN   : %llu\n", b.isbn);
    printf("Price  : %.2f\n", b.price);
    return 0;
}