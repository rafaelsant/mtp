#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void gravaArq(char * filename);
int main(){
    srand( (unsigned)time(NULL) );
    int num,i;
    float * numeros;
    char nome[100];
    printf("Digite o nome do arquivo que voce deseja criar:\n");
    scanf("%s",nome);
    gravaArq(nome);
    printf("Digite quantos numeros aleatorios voce deseja criar:\n");
    scanf("%d",&num);
    FILE *out;
    out = fopen(nome, "w");
    for(i=0;i<num;i++)
    {
        fprintf(out,"%d - %.f\n",i, rand()%10);
    }
    fclose(out);
return 0;
}
void gravaArq(char * filename){
    FILE *fp;
    fp = fopen(filename,"w");
    fclose(fp);
}
