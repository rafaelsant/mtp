#include <stdio.h>
#include <time.h>
#include <locale.h>
#include <stdlib.h>

void imprime_impar();
void imprime_par();

int main(){
    setlocale(LC_ALL,"Portuguese");
    int selec;
    printf("Digite 1 para números pares de 2 para números ímpares\n");
    scanf("%d",&selec);
    if(selec == 1){
        imprime_par();
    }
    if(selec == 2){
        imprime_impar();
    }
    return 0;
}

void imprime_impar()
{
    int i;
    printf("\nImpar:");
    for( i = 0; i<10;i++){
        if(i%2 == 1){
           printf("\n%d",i);
        }
    }
}
void imprime_par()
{
    int i;
    printf("\npar:");
    for( i = 0; i<10;i++){
        if(i%2 == 0){
           printf("\n%d",i);
        }
    }
}
