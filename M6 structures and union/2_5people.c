// Program to accept 5 people's name, address and telephone
// number and search for the informaation of particular person
// wrt. name or number
#include<stdio.h>
#include<string.h>  // for strcmp
struct people 
{
    char name[20];
    char address[20];
    int number;
};
void disp(struct people a);
int name_search(char s[20],struct people a[5]);
int num_search(int num, struct people a[5]);
int main()
{
    struct people p[5];     // declaration struct variable p
    for (int  i = 0; i < 5; i++){       // initializaton of p
        printf("\nPeople %d\n",i+1);
        printf("Name :");
        scanf("%s",p[i].name);
        printf("Address :");
        scanf("%s",p[i].address);
        printf("Number :");
        scanf("%d",&p[i].number);
    }
    printf("-----SEARCH MENU------\n");
    printf("1.Search wrt NAME\n2.Search wrt NUMBER\n");
    int choice, found;
    int yesno;
    do{
        printf("Enter choice: ");
        scanf("%d",&choice);
        switch (choice){
            case 1:
                printf("Enter name to search:");
                char str[20];
                scanf("%s",&str);
                found = name_search(str, p);
                if(found != -1)
                    disp(p[found]);
                else
                    printf("Not found!");
                printf("Want to search again? 1/0 :");
			    scanf("%d",&yesno);
                break;
            case 2:
                printf("Enter number to search: ");
                int n;
                scanf("%d",&n);
                found = num_search(n, p);
                if(found != -1)
                    disp(p[found]);
                else
                       printf("Not found!");
                printf("Want to search again? 1/0 :");
			    scanf("%d",&yesno);
                break;
            default:
                printf("Invalid choice!\n");
                printf("Want to search again? 1/0 :");
			    scanf("%d",&yesno);
                break;
        }
    
    }while(yesno == 1);
    
}
// subprogram section
void disp(struct people a){
    printf("%s\n",a.name);
    printf("%s\n",a.address);
    printf("%d\n",a.number);
}
int name_search(char s[20], struct people a[5]){
    for (int i = 0; i < 5; i++)
        if (strcmp(s,a[i].name) == 0)
            return i;   
    return -1;
}
int num_search(int num, struct people a[5]){
    for(int k = 0; k < 5; k++)
        if(num == a[k].number)
            return k;
    return -1;
}