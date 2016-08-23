#include<stdio.h>
#include<locale.h>
#include<time.h>
#include<stdlib.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    srand(time(0));
    int entrada,start,num,flag = 0;
            do{
                num = (rand()%(100));
                printf("\nPor favor digite um número de 0 à 100!:\n");
                scanf("%d",&num);
                if(num == entrada){
                    printf("\nacertou");
                    flag = 1;
                }
                else
                    printf("\nerrou");
                }while(flag != 1);
        return 0;
}
