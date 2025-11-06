#include<stdio.h>
#include<string.h>
int main()
{
    typedef struct 
    {
        char name[50];
        int hp;
        int attack;
        int speed;
        char tier;
    }pokemon;

    pokemon arr[3];
    arr[0].hp=50;
    arr[0].attack=100;
    arr[0].speed=80;
    arr[0].tier='A';
    
    printf(strcpy(arr[0].name,"Pikachu"));
    printf("\n%d",arr[0].hp);
    printf("\n%d",arr[0].attack);
    printf("\n%d",arr[0].speed);
    printf("\n%c",arr[0].tier);

    arr[1].hp=50;
    arr[1].attack=100;
    arr[1].speed=80;
    arr[1].tier='A';
    
    printf(strcpy(arr[1].name,"mewtwo"));
    printf("\n%d",arr[1].hp);
    printf("\n%d",arr[1].attack);
    printf("\n%d",arr[1].speed);
    printf("\n%c",arr[1].tier);

    arr[2].hp=50;
    arr[2].attack=100;
    arr[2].speed=80;
    arr[2].tier='A';
    
    printf(strcpy(arr[2].name,"charizard"));
    printf("\n%d",arr[2].hp);
    printf("\n%d",arr[2].attack);
    printf("\n%d",arr[2].speed);
    printf("\n%c",arr[2].tier);
    return 0;
}