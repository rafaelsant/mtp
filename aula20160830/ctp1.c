#include <stdio.h>
#include <ctype.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    char frase[100];
    int i=0;
    printf("\nDigite uma frase para converter em lowercase!\n");
    gets(frase);
    for(i = 0; frase[i]!=NULL;i++)
    {
        frase[i]=tolower(frase[i]);
    }
    printf("\nSua string em lowercase é:\n%s",frase);
    return 0 ;
}
