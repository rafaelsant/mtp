#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    int num,flag;
    printf("\nPor favor digite um n�mero inteiro:\n");
    scanf("%d",&num);
    if(num%2 == 0){
        printf("\n O n�mero %d � par!:\n2\n");
        flag ++;
    }
     if(num%3 == 0){
        printf("\nO n�mero%d � divis�vel por:3\n",num);
        flag ++;
    }
     if(num%5 == 0){
        printf("\nO n�mero %d � divis�vel por:5\n",num);
        flag ++;
    }
     if(num%7 == 0){
        printf("\nO n�mero %d � divis�vel por:7\n",num);
        flag ++;
    }
    if(flag << 1)
        printf("\n O n�mero %d n�o � divis�vel por 2,3,ou 7!\n", num);
    return 0;
}
