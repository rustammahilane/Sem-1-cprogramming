//Write a function to generate N fibonacci numbers
#include<stdio.h>
void fibonacci(int a);  //function declarataion
int main()
{
    int n;
    printf("Enter no of terms in fibonacci series: ");
    scanf("%d",&n);
    if(n>0){
        printf("Fibonacci series of %d terms:\n", n);
        fibonacci(n);   //function call
    }
    else
    printf("Invalid N");
    return 0;
}
// function definition
void fibonacci(int a){
    int arr[a];
    if(a >= 1){
        arr[0] = 0;
        printf("%d\n",arr[0]);
    }
    if (a >= 2){
        arr[1] = 1;
        printf("%d\n",arr[1]);
    }
    for(int i = 2; i < a; i++){
        arr[i] = arr[i-1] + arr[i-2];
        printf("%d\n",arr[i]);
    }
}