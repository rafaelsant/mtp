#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    float lado_quadrado,area_quadrado;
    printf("Digite o N�mero do lado do quadrado:\n");
    scanf("%f",&lado_quadrado);
    area_quadrado=(lado_quadrado*lado_quadrado);
    printf("\nO valor da �rea do quadrado �:\n%f\n",area_quadrado);
    return 0;
}
