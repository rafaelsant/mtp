#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    int entrada, i,flag = 0;
    printf("\nPor favor digite um número:\n");
    scanf("%d",&entrada);
    for(i = 2; i < entrada ; i++ ){
        if(entrada%i == 0){
            printf("O número não é primo!%d");
            break;
        }
    }
    if( i == entrada){
        printf("\nO número é primo!\n");
    }
    return 0;
}
