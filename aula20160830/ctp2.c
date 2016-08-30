#include <stdio.h>
#include <ctype.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    char frase[100];
    char c[100];
    int i=0;
    printf("\nDigite uma frase para converter em uppercase!\n");
    gets(frase);
    for(i = 0; frase[i]!=NULL;i++)
    {
        c[i]=toupper(frase[i]);
    }
    printf("\n%s",c);
    return 0;
}
