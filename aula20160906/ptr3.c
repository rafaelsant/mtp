#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int vetor[] = {0xFF,0xFFFF,0xFFFFFF,0xFFFFFFFF};
    int tamanho=0,tam = sizeof(vetor)/sizeof(int);
    unsigned char * ponteiro = NULL;
    ponteiro = (unsigned char *) vetor;

    printf("\t\t\t\t3.1.3 Memória 'lotada'\n\n\n");
    for(; ponteiro < vetor + tam; ponteiro++)
    {
        printf("%p : %x\n",ponteiro, *ponteiro);
        if(*ponteiro != 0x0)
        {
            tamanho++;        }

    }
    printf("%d",tamanho);
    return 0;
}
