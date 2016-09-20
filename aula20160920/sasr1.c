#include <stdio.h>
#include <time.h>
#include <locale.h>
#include <stdlib.h>

void fala();

int main(){
    setlocale(LC_ALL,"Portuguese");
    char entrada[55];
    srand (time(0));
    printf("Quer Tc comigo?\n");
    do{
        fgets(entrada,sizeof(entrada),stdin);
        fala();
    }while (strncmp(entrada, "tchau", 5 != 0));
    printf("\n**Que pena, estava gostando de você ): ");
    return 0;
}
void fala(){
    int x;
    x = 1+ (rand()%7);
    switch(x){
    case 1:
    printf("\n**Tudo bem?\n");
    break;
    case 2:
    printf("\n**Ok\n");
    break;
    case 3:
    printf("\n**HUEHUEHUEBrBrBr!\n");
    break;
    case 4:
    printf("\n**Que legal\n");
    break;
    case 5:
    printf("\n**Que chato\n");
    break;
    case 6:
    printf("\n**Fale mais sobre isso\n");
    break;
    case 7:
    printf("\n**Sobre o que quer falar?\n");
    break;
    }
}
