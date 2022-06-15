//incorrect
#include<stdio.h>
#define max 100
int main()
{
    int Rusarr1247[max];
    int Russize247;
    printf("Enter size of array:");
    scanf("%d",&Russize247);
    for(int Rusx247 = 0; Rusx247 < Russize247; Rusx247++){
        printf("Element %d:",Rusx247 + 1);
        scanf("%d",&Rusarr1247[Rusx247]);
    }
    int Rusfound247 = 0;
    for(int Rusi247 = 0; Rusi247 < Russize247 - 1; Rusi247++){
        for(int Rusj247 = Rusi247 + 1; Rusj247 < Russize247; Rusj247++){
            if ( Rusarr1247[Rusj247] % Rusarr1247[Rusi247] == 0){
                printf("%d %d\n",Rusi247,Rusj247);
                Rusfound247 = 1;
                break;
            }
        }
        if(Rusfound247 == 1)
        break;
    }
    return 0;
}