#include<stdio.h>
#include<locale.h>
#include<time.h>
#include<stdlib.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    srand(time(0));
    int jogada_1,jogada_2,jogada_3,start,soma;
    printf("\nPor favor digite 1 para iniciar o jogo:\n");
    scanf("%d",&start);
    if(start == 1){
        jogada_1 = (rand()%(7));
        jogada_2 = (rand()%(7));
        jogada_3 = (rand()%(7));
        soma = jogada_1+jogada_2+jogada_3;
        if(soma == 7 || soma == 11){
            printf("\n Você ganhou!\nSua soma foi:\n%d",soma);
        }
        else
            printf("\n Você perdeu!\nSua soma foi:\n%d",soma);
    }
    return 0;
}
