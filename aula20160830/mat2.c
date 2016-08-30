#include<stdio.h>
//#include<locale.h>
#include<math.h>
int main(){
    //setlocale(LC_ALL,"Portuguese");
    float lado_b,lado_c,angulo , lado_a;
    printf("\nPor favor digite os lados b e c e seu angulo Â do triangulo em radianos:\n");
    scanf("%f%f%f",&lado_b,&lado_c,&angulo);
    lado_a = sqrt(pow(lado_b,2) + pow(lado_c,2) - (2 * lado_b * lado_c) * cos(angulo));
    printf("\n%f",lado_a);
    return 0;
}
