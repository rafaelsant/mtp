#include <stdio.h>
#include <ctype.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    char frase[100];
    int counter = 0;
    int i=0;
    printf("\nDigite uma frase para contagem de caracteres !\n");
    gets(frase);
    while( frase[i]!=NULL )
    {
        if((isalpha(frase[i])) != 0){
            counter++;
        }
        i++;
    }
    printf("\n%s     %d",frase,counter);
    return 0;
}
