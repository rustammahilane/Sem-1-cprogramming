#include<stdio.h>
int main()
{
     int marks;
     printf("\nEnter marks obtained by student(0-100):");
     scanf("%d",&marks);
     if (marks>89 && marks<=100)
     printf("Grades obtained by student : A+");
     else if (marks>79 && marks<=90)
     printf("Grades obtained by student : A");
     else if (marks>69 && marks<=80)
     printf("Grades obtained by student : B");
     else if (marks>59 && marks<=70)
     printf("Grades obtained by student : C");
     else if (marks>49 && marks<=60)
     printf("Grades obtained by student : D");
     else if (marks>39 && marks<=50)
     printf("Grades obtained by student : E");
     else if (marks>=0 && marks<40)
     printf("Grades obtained by student : FAIL!!!");
     else
     printf("invalid input....");
     return 0;
}    