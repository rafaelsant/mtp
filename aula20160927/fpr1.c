#include <stdio.h>
void divisao(int dividendo, int divisor, int *pquciente, int *presto);
int main(){
    int dividendo, divisor;
    int quociente, resto;
    printf("entre com o dividendo: ");
    scanf("%d",&dividendo);
    printf("entre com o divisor: ");
    scanf("%d",&divisor);
    divisao(dividendo,divisor,&quociente,&resto);
    printf("Quociente: %d, Resto: %d\n",quociente,resto);
    return 0;
}

void divisao(int dividendo, int divisor, int *pquociente, int *presto){
    *pquociente = dividendo/divisor;
    *presto = dividendo%divisor;
}
