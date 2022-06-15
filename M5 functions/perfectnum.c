//Program to print all perfect numbers in given range using function
#include<stdio.h>
int perfect(int a,int b);   
int main()
{
    int low, up;
    printf("Input lower search limit of perfect numbers:");
    scanf("%d",&low);
    printf("Input upper search limit of perfect numbers:");
    scanf("%d",&up);
    printf("The perfect numbers between between %d and %d are: ",low,up);
    perfect(low,up);
    return 0;
}
int perfect(int a, int b){
    // perfect number = sum of factors is equal to itself
    while(a <= b){
        int sum_fact = 0;     //sum of factors initialized as zero
        //loop to get facotrs
        for(int i = 1; i <= a/2; i++){
            if(a%i ==  0)
            sum_fact += i;     //adding up factors in sum_fact
        }
        if(sum_fact == a)
        printf("%d   ",a);
        a++;
    }
}
  