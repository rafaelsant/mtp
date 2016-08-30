#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    float expoente,base,resultado;
    printf("\nPor favor digite o expoente e a base do logarítimo:\n");
    scanf("%f",&expoente);
    scanf("%f",&base);
    resultado = (log(expoente)/log(base));
    printf("\n%.f",resultado);
    return 0;
}
