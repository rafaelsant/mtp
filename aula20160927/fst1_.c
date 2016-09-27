#include <stdio.h>

struct Divisao_inteira{
    int quociente;
    int resto;
};
struct Divisao_inteira divisao(int num1, int den1,int num2, int den2);
int main(){
    int num1,num2,den1,den2;
    printf("Digite um numero e seu denominador separados por uma virgula\n");
    scanf("%d/%d",&num1,&den1);
    scanf("%d/%d",&num2,&den2);
    struct Divisao_inteira resposta;
    resposta = divisao(num1,den1,num2,den2);
    printf("%d,%d",resposta.quociente,resposta.resto);
    return 0;
}

struct Divisao_inteira divisao(int num1, int den1,int num2, int den2){
    struct Divisao_inteira resposta;
    resposta.quociente = (num1 /den1)/(num2/den2);
    resposta.resto = (num1/den1)%(num2/den2);
    return resposta;
}
