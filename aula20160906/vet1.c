#include<stdio.h>
#include<time.h>
#include<locale.h>
#define N 10000
int main(){
    setlocale(LC_ALL, "Portuguese");
    int numero,flag;
    float soma = 0.0f;
    int vetor[N];
    printf("Digite um n�mero inteiro n�o negativo\n");
    scanf("%d",&numero);
    for (flag = 0; flag<N; flag++){
        vetor[flag] = rand()%numero +1;
    }
    for (flag = 0; flag<N; flag++){
        soma = soma + vetor[flag];
    }
    printf("A media dos n�meros �: %g\n",soma/N);
    return 0;
}
