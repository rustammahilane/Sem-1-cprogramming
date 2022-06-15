// to write a menu driven program (structures)
#include<stdio.h>
#include<math.h>
struct dist{
    int feet;
    int inch;
} d1, d2, sumd;
struct complex{
    float x;
    float y;
} c1, c2, sumc;
struct time{
    int sec;  
    int hr;
    int min;
} t1, t2, tdif;
struct complex addcomplex(struct complex a, struct complex b);
struct time interval(struct time a, struct time b);
int main()
{
    int choice;
    printf("1.Add two distances (in inch-feet) using structures\n"
        "2.Add two complex numbers by passing structure to a function\n"
        "3.Calculate the difference between two time periods using structures\n");
    int again;
    do{
        printf("\nEnter choice :");
        scanf("%d",&choice);
        
        switch(choice){
        case 1:
            printf("Enter 1st distance\n");
            printf("Enter feet: ");
            scanf("%d", &d1.feet);
            printf("Enter inch: ");
            scanf("%d", &d1.inch);
            printf("Enter 2nd distance\n");
            printf("Enter feet: ");
            scanf("%d", &d2.feet);
            printf("Enter inch: ");
            scanf("%d", &d2.inch);
            sumd.feet = d1.feet + d2.feet;
            sumd.inch = d1.inch + d2.inch;
            // convert inches to feet if greater than 12
            while (sumd.inch >= 12.0) {
                sumd.inch = sumd.inch - 12.0; 
                ++sumd.feet;
            }
            printf("Sum of distances = %d\'%d\"",
                sumd.feet, sumd.inch);
            printf("\nAgain? 1/0 :");
            scanf("%d",&again);
            break;
        case 2:
            printf("For 1st complex number \n");
            printf("Enter the real and imaginary parts: ");
            scanf("%f %f", &c1.x, &c1.y);
            printf("For 2nd complex number \n");
            printf("Enter the real and imaginary parts: ");
            scanf("%f %f", &c2.x, &c2.y);
            sumc = addcomplex(c1,c2);
            printf("Sum of complex : %.1f + %.1fi\n",sumc.x, sumc.y);
            printf("Again? 1/0 :");
            scanf("%d",&again);
            break;
        case 3:
            printf("Enter the inital hour:minute:second respectively :");
            scanf("%d%d%d", &t1.hr, &t1.min, &t1.sec);
            printf("Enter the final hour:minute:second respectively :");
            scanf("%d%d%d", &t2.hr, &t2.min, &t2.sec);
            tdif = interval(t1, t2);
            printf("Time difference : %d:%d:%d\n",
                tdif.hr, tdif.min, tdif.sec);
            printf("Again? 1/0 :");
            scanf("%d",&again);
            break;
        default: 
            printf("invalid choice!");
            printf("\nAgain? 1/0 :");
            scanf("%d",&again);
            break;
        }
    }while(again == 1);
    return 0;
}
//subprogram section
struct complex addcomplex(struct complex a, struct complex b){
    struct complex temp;
    temp.x = a.x + b.x;
    temp.y = a.y + b.y;
    return temp;
}
struct time interval(struct time a, struct time b){
    struct time temp;
    while(b.sec > a.sec){
        --a.min;
        a.sec = a.sec + 60;
    }
    temp.sec = fabs(b.sec - a.sec);
    while(b.min > a.min){
        --a.min;
        a.min = a.min + 60;
    }
    temp.min = fabs(b.min - a.min);
    temp.hr = b.hr - a.hr;
    return temp;
}