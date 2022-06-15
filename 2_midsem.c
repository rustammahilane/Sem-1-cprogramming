#include<stdio.h>
int main()
{
    int Ruslow247, Rusmid247, Rusup247, Rusmulti247;
    int Rusa247, Rusb247, Rusc247;
    printf("Enter 3 numbers:");
    scanf("%d",&Rusa247);
    scanf("%d",&Rusb247);
    scanf("%d",&Rusc247);
    if( Rusa247 > Rusb247 && Rusb247 >Rusc247){
        Ruslow247 = Rusc247;
        Rusmid247 = Rusb247;
        Rusup247 = Rusa247;
    }
    else if( Rusa247 > Rusc247 && Rusc247 > Rusb247){
        Ruslow247 = Rusb247;
        Rusmid247 = Rusc247;
        Rusup247 = Rusa247;
    }
    else if( Rusb247 > Rusc247 && Rusc247 > Rusa247){
        Ruslow247 = Rusa247;
        Rusmid247 = Rusc247;
        Rusup247 = Rusb247;
    }
    else if( Rusb247 > Rusa247 && Rusa247 > Rusc247){
        Ruslow247 = Rusc247;
        Rusmid247 = Rusa247;
        Rusup247 = Rusb247;
    }
    else if( Rusc247 > Rusb247 && Rusb247 > Rusa247){
        Ruslow247 = Rusa247;
        Rusmid247 = Rusb247;
        Rusup247 = Rusc247;
    }
    else{
        Ruslow247 = Rusb247;
        Rusmid247 = Rusa247;
        Rusup247 = Rusc247;
    }
    Rusmulti247 = Ruslow247 * Rusmid247;
    if(Rusmulti247 % 2 == 0)
    printf("Even");
    else
    printf("Odd");
}