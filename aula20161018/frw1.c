#include <stdio.h>
#include <stdlib.h>
int main(){

FILE *fp;
fp =  fopen ("info.txt", "w+");
fclose(fp);
int n,idade;
float altura;
char str[6000];
printf("\n0_para sair:\n");
printf("\n1_ inserir a altura:\n");
printf("\n2_ inserir a idade:\n");
printf("\n3_para ler dados:\n\n\n");
do{
    scanf("%d",&n);
    switch(n){
        case 1:
            fp =  fopen ("info.txt", "a");
            printf("\nDigite a altura:\n\n");
            scanf("%f",&altura);
            fprintf(fp,"%s %f %s\n\n","A altura é:",altura,"metros");
            fclose(fp);
            break;
        case 2:
            fp =  fopen ("info.txt", "a");
            printf("\nDigite a idade:\n\n");
            scanf("%d",&idade);
            fprintf(fp,"%s %d %s \n\n","A idade é:",idade,"anos");
            fclose(fp);
            break;
        case 3:
            fp =  fopen ("info.txt", "r");
            if(fp == NULL)
                {
                    perror("Error opening file");
                    return(-1);
                }
            if( fgets (str, 6000, fp)!=NULL )
                {
                    /* writing content to stdout */
                    puts(str);
                }
            fclose(fp);
            break;
        case 0:
            return 0;
            break;
    }
}while(n =! 0);
}

void lerarquivo(FILE *fn){

}
