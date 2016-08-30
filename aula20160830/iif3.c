#include <stdio.h>
#include <locale.h>
#include <stdint.h>
#include <inttypes.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int num,i;
    float inversa,numero=0;
    double numero2 = 0, inversa2 = 0;
    printf("Digite um número\n");
    scanf("%d", &num);
    inversa = 1./num;
    inversa2 = 1.0/num;
    numero = inversa ;
    numero2 = inversa2;
    for(i = 1; i<=729 ;i++){
        numero = numero+(float)inversa ;
        numero2 = numero2+ (double)inversa2;
    }
    printf("%f\n%f", numero,numero2);

    return 0 ;
}
