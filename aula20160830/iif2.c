#include <stdio.h>
#include <locale.h>
#include <stdint.h>
#include <inttypes.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    uint64_t fatorial = 1;
    int num,i=1;
    printf("Digite um número para saber seu fatorial\n");
    scanf("%d", &num);
    for(i = 2; i<=num ;i++){
        fatorial = fatorial * i ;
    }
    printf("o fatorial é: %" PRIu64"\n", fatorial);

    return 0 ;
}
