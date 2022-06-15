#include<stdio.h>
int main()
{
    int cs247_h,cs247_l,cs247_w,vol=0;
    printf("Height: ");
    scanf("%d",&cs247_h);
    printf("Width: ");
    scanf("%d",&cs247_w);
    printf("Length: ");
    scanf("%d",&cs247_l);
    vol= cs247_h*cs247_l*cs247_w;
    if (cs247_h>=53 || cs247_w>=40 )
    {
        printf("Rejected");
    }
    else
    printf("Volume : %d",vol);
    return 0;
}