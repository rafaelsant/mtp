#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    int entrada, fatorial = 1,i;
    printf("\nPor favor digite um n�mero para que seja calculado eu fatorial:\n");
    scanf("%d",&entrada);
    for(i = 2; i <= entrada ; i++ ){
        fatorial = fatorial*i;
    }
    printf("O c�lculo do fatorial �:%d",fatorial);
    return 0;
}
