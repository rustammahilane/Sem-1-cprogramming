/*Store the item number, item name, unit price and quantity in stock of N itemsin a
  supermarket. Display the following list of items present in the stock.
  i. List of items with unit price greater than Rs 129.
  ii. List of items with quantity in stock less than 5. */

#include<stdio.h>
unsigned int N;          //stock of N items
struct item{
  int num;
  char name[20];
  float price_1;
  int quant;
};
void disp129(struct item a[]);
void disp5(struct item a[]);
int main()
{
  printf("Enter no of items in stock :");
  scanf("%u",&N);
  struct item p[N];
  for (int i = 0; i < N; i++)
  {
    printf("\nITEM %d\n", i + 1);
    printf("Enter item name :");
    scanf("%s",&p[i].name);
    printf("Enter item number :");
    scanf("%d",&p[i].num);
    printf("Enter price of 1 item :");
    scanf("%f",&p[i].price_1);
    printf("Enter quantity available :"); 
    scanf("%d",&p[i].quant);
  }
  printf("\n--------LIST OF ITEMS WITH UNIT PRICE GREATER THAN 129-------\n");
  disp129(p);
  printf("\n--------LIST OF ITEMS WITH QUANTITY LESS THAN 5--------\n");
  disp5(p);
}
// subprogram section
void disp129(struct item a[]){
  printf("%-10s\t%-20s\t%-8s\t%-8s\n",
    "Item no","Item name","Price","Quantity");
  for (int i = 0; i < N; i++)
  if(a[i].price_1 > 129)
  printf("%-10d\t%-20s\t%-8.2f\t%-8d\n",
    a[i].num, a[i].name, a[i].price_1, a[i].quant);  
}
void disp5(struct item a[]){
  printf("%-10s\t%-20s\t%-8s\t%-8s\n",
    "Item no","Item name","Price","Quantity");
  for (int i = 0; i < N; i++)
  if(a[i].quant < 5)
  printf("%-10d\t%-20s\t%-8.2f\t%-8d\n",
    a[i].num, a[i].name, a[i].price_1, a[i].quant);  
} 