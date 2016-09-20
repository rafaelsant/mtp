#include <stdio.h>
#include <time.h>
#include <locale.h>
#include <stdlib.h>

int lanca_dado();

int main(){
    setlocale(LC_ALL,"Portuguese");
    srand (time(0));
    int init;
    int i,soma_dado=0,n=0;
    printf("Digite 1 para iniciar\n");
    scanf("%d",&init);
    if(init == 1){
        do{
                soma_dado = 0;
                for(i = 1; i<=5 ; i++){
                soma_dado=soma_dado+lanca_dado();
                }
        n++;
        if(n == 3)
            break;
        }while (soma_dado<=21);
        printf("\nSoma:%d\nNúmero de tentativas:%d",soma_dado,n);
    }
    else
        return 0;
    return 0;
}

int lanca_dado(){
    int dado;
    dado = 1+(rand()%6);
    return dado;
}
