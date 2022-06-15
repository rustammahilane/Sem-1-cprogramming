#include<stdio.h>
#include<stdlib.h>
struct Player{
    char player_name[14];
    int player_id;
    int prize_money;
};

int main()
{
    int N;
    printf("Enter no of player: ");
    scanf("%d",&N);
    struct Player *ptr[N], winner = {"unknown",0,0};
    for(int i = 0; i< N; i++)
    ptr[i] = (struct Player*)malloc(sizeof(struct Player));
    for (int i = 0; i < N; i++)
    {
        printf("Enter player[%d] name,id , prizemoney:",i);
        scanf("%s%d%d",ptr[i]->player_name,&ptr[i]->player_id,&ptr[i]->prize_money);
    }
    printf("Enter Winner id: ");
    scanf("%d",&winner.player_id);
    for(int i =0 ; i < N; i ++){
        if(winner.player_id == ptr[i]->player_id)
        winner = *ptr[i];
        winner.prize_money = 0;
        
    }
    for(int i = 0; i < N; i++){
        winner.prize_money += ptr[i]->prize_money;
    }
        free(ptr);
    printf("%s\n%d\n%d\n",winner.player_name, winner.player_id, winner.prize_money);
    struct Player *p;
    p = (struct Player*)malloc(40);
    printf("%d",sizeof(winner));
}