#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    char frase [100];
    int flag=0, i=0;
    printf("\nPor favor digite uma frase:\n");
    gets(frase);
    while(frase[i]!= NULL){
        if( frase[i]!= ' '){
            flag++;
        }
        i++;
    }
    printf("\nA string possui %d caracteres",flag);
    return 0;
}
