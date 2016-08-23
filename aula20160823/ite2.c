#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    int base,expoente, i, resultado;
    printf("\nPor favor digite uma base e um expoente para que seja calculada sua potência:\n");
    scanf("%d\n%d",&base, &expoente);
    resultado = base;
    for(i = 2; i <= expoente ; i++ ){
        resultado = resultado*base;
    }
    printf("\n%d^%d é:%d\n",base,expoente,resultado);
    return 0;
}
