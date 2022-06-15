/*
Program to find the distance between two points (x1, y1) and (x2, y2) in a Cartesian
plane.
*/

#include<stdio.h>
#include<math.h>
int main()
{   int x1,y1,x2,y2;
    float distance;
    printf("Enter x and y coordinates of point 1 :");
    scanf("%d%d",&x1,&y1);
    printf("Enter x and y coordinates of point 2 :");
    scanf("%d%d",&x2,&y2);
    //calculation of distance
    distance=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    printf("The distance between the points (%d,%d) and (%d,%d) is :%f",x1,y1,x2,y2,distance);
    return 0;
}