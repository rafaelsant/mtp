#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    int entrada, i,flag = 0;
    printf("\nPor favor digite um n�mero:\n");
    scanf("%d",&entrada);
    for(i = 2; i < entrada ; i++ ){
        if(entrada%i == 0){
            printf("O n�mero n�o � primo!%d");
            break;
        }
    }
    if( i == entrada){
        printf("\nO n�mero � primo!\n");
    }
    return 0;
}
