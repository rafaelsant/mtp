#include <stdio.h>

int funcao(int num,int den);

int main(){
int num;
int den;
printf("Digite um numero e seu denominador separados por uma virgula\n");
scanf("%d,%d",&num,&den);
funcao(num,den);
return 0;
}

int funcao(int num,int den){
    printf("%d,%d",num/den,num%den);
}
