/* Accept a name, register number, marks in 6 subjects of N students.
   Find the total and average of each student.sort this array of structures */
#include<stdio.h>
#include<string.h>
int N;                  // no of students N
struct stud{
    char name[20];
    int regno;
    int marks[6];
    int total;
    float avg;
};
void menu(){
    printf("-------------MENU--------------\n");
    printf("1. SORTING Based on name.\n");
    printf("2. SORTING Based on register number.\n");
    printf("3. BINARY SEARCH student using register noumber.\n");
    printf("4. SORTING Based on average marks and show average marks.\n");
    printf("5. DISPLAY the details given his register number.\n");
}
void class_info(struct stud s[]){
    printf("%-4s %20s\t%-8s\t%-8s\t%-8s\n",
        "S.No","Name","Reg No","Total","Average");
    for(int i = 0; i < N; i++){
        printf("%-4d %20s\t%-8d\t%-8d\t%-8.2f\n",
            i+1, s[i].name, s[i].regno, s[i].total, s[i].avg);
    }
}
void regno_sort(struct stud s[]);
void name_sort(struct stud s[]);
void avg_sort(struct stud s[]);
void regno_bsearch(int num, struct stud s[]);
int main()
{   
    printf("Enter no of students :");
    scanf("%d",&N);
    struct stud stu[N];
    for (int i = 0; i < N; i++)
    {
        stu[i].total = 0;
        stu[i].avg = 0;
        printf("Student %d\n", i + 1);
        printf("Enter name: ");
        scanf("%s",&stu[i].name);
        printf("Enter regno: ");
        scanf("%d",&stu[i].regno);
        printf("Enter marks in 6 subject :\n");
        for (int k = 0; k < 6; k++){
            scanf("%d",&stu[i].marks[k]);
            stu[i].total += stu[i].marks[k];
            stu[i].avg += (float)stu[i].marks[k] / 6;
        }
    }
    menu();
    int choice, again;
    do{
        printf("Enter choice:");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            name_sort(stu);
            printf("Again? 1/0 :");
            scanf("%d",&again);
            break;
        case 2:
            regno_sort(stu);
            printf("Again? 1/0 :");
            scanf("%d",&again);
            break;
        case 3:
            printf("Enter register number to search: ");
            int num;
            scanf("%d",&num);
            regno_bsearch(num, stu);
            printf("Again? 1/0 :");
            scanf("%d",&again);
            break;
        case 4:
            avg_sort(stu);
            printf("Again? 1/0 :");
            scanf("%d",&again);
            break;
        case 5:
            class_info(stu);
            printf("Again? 1/0 :");
            scanf("%d",&again);
            break;
        default:
            break;
        }
    }while(again == 1);
    return 0;
}
// subprogram section
void regno_bsearch(int a, struct stud s[]){
    // regno_sort(s);
    int first = 0;
    int last = N-1;
    int mid = (first + last)/2;
    while (first <= last)
    {
        if (s[mid].regno == a){
            printf("%6s\t%20s\t%8s\t%8s\n","Reg No","Name","Total","Average");
            printf("%6d\t%20s\t%8d\t%8.2f\n",s[mid].regno,s[mid].name,s[mid].total,s[mid].avg);
            break;
        }
        else if(a > s[mid].regno)
        first = mid + 1;
        else
        last = mid -1;
        mid = (first + last)/2;
    }
}
void name_sort(struct stud s[]){       //bubble sort
    for (int i = 0; i < N-1; i++){
        for (int j = 0; j < N-1-i; j++){
            if (strcmp(s[j].name, s[j+1].name) > 0){
                struct stud temp;
                temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            }
        }
    }
    class_info(s);
}
void avg_sort(struct stud s[]){
    for (int i = 0; i < N-1; i++){
        for (int j = 0; j < N-1-i; j++){
            if (s[j].avg > s[j+1].avg){
                struct stud temp;
                temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            }
        }
    }
    class_info(s);
}
void regno_sort(struct stud s[]){
    static int sorted = 1;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N-1-i; j++){
            if(s[j].regno > s[j+1].regno){
                struct stud temp;
                temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            }
        }
    }
    class_info(s);
}