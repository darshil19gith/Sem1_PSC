#include<stdio.h>
typedef union pokemon
    {
       int hp;
       int attack;
       int speed;
    }pokemon;
int main(){
    

    pokemon pikachu;
    pikachu.attack=70;
    pikachu.hp=100;
    pikachu.speed=90;
    
    printf("%d\n",pikachu.attack);
    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.speed);

    return 0;
}