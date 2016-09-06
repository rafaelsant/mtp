#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <locale.h>
#define N 256
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int i;
    char frase[N];
    printf("Entre com uma frase: ");
    gets(frase);
    for(i=0;frase[i]!= '\0';i++)
        frase[i] != toupper(frase[i]);
    printf("Tamanho: %u\n",strlen(frase));
    if(strncmp(frase,"bom dia",7)==0)
        printf("Bom dia pra você também!\n");
    else
        printf("Você quer dizer: %s?\n",frase);
    return 0;
}
