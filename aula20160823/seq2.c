#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    float base,altura,area;
    printf("\nPor favor digite o valor da base e da altura do triangulo:\n");
    scanf("%f",&base);
    scanf("%f",&altura);
    area = ((base*altura)/2);
    printf("\nA área do triangulo é:\n%f\n",area);
    return 0;
}
