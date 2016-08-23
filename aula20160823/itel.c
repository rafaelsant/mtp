#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    int entrada, fatorial = 1,i;
    printf("\nPor favor digite um número para que seja calculado eu fatorial:\n");
    scanf("%d",&entrada);
    for(i = 2; i <= entrada ; i++ ){
        fatorial = fatorial*i;
    }
    printf("O cálculo do fatorial é:%d",fatorial);
    return 0;
}
