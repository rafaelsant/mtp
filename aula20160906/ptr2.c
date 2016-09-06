#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int vetor[] = {0,1,2,4,8};
    int i[5],flag=0,counter=0,length;
    unsigned char *ponteiro = NULL;
    ponteiro = (unsigned char *) vetor;
    length = (sizeof(vetor)/sizeof(int));
    while (flag!=length){
        if(*ponteiro ==  0x0)
            counter += sizeof(ponteiro);
        ponteiro++;
        flag++;
    }
    printf("%d",counter);
    return 0;
}
