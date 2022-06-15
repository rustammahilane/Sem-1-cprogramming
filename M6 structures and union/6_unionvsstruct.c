// write a program to compare between union and structures
#include<stdio.h>
struct student
{
    int rollno;
    char name[20];
    float percent;
};
union stud{
    int roll;
    char nam[20];
    float perc;
};
int main()
{
    struct student s_stu;
    union stud u_stu;
    printf("Size of structure STUDENT :%d\n",sizeof(s_stu));
    printf("Size of union STUD :%d",sizeof(u_stu));
    return 0;
}