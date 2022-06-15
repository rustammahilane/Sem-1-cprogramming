//program to count the number of palindromes in given list of numbers
#include<stdio.h>
#define max 50
int main()
{
    int num[max],size, rev[max],temp[max],count=0;
    printf("Enter array size:");
    scanf("%d",&size);
    // initialisation of array num
    for(int i = 0; i <size; i++){
        printf("Element %d: ", i+1);
        scanf("%d",&num[i]);
        // storing array num in temp
        temp[i] = num[i];
    }
    for(int i = 0; i < size; i++){
        rev[i] = 0;
        // reversing the number
        while (num[i] > 0)
        {
            rev[i] = rev[i]*10 + num[i]%10; 
            num[i] /= 10;
        }
        // counting no of palindromes
        if(temp[i] == rev[i])
        count++;
    }
    printf("No of palindrome in the entered numbers: %d",count);
    return 0;
}