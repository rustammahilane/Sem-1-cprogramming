// Program to calculate value of nPr (permutation)
#include<stdio.h>
// function to calculate factorial
int fact(int x){
    int f = 1;
    for (int i = 1; i <= x; i++){
        f *= i;
    }
    return f;
}
//function to calcluate permutation
int calc(int a, int b){
    int c = fact(a)/fact(a-b);
    return c;
}
int main()
{
    int n,r;
    printf("Permutation: nPr\n");
    printf("Enter values of n and r respectively: ");
    scanf("%d%d",&n,&r);
    if(n>0 && r>0 && n>=r){
        int p = calc(n,r);          // p = permutation
        printf("nPr = %d",p);
    }
    else
    printf("Invalid values!!");
    return 0;
} 