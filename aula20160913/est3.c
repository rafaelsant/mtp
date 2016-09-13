#include <stdio.h>
#define MAX 10

typedef struct Cadastro{
char nome[30];
int idade;
char telefone;
}Cadastro;

void cadastrar(Cadastro *pessoa, int max_user){
    int i;
    for(i=0;i<max_user;i++){
        printf("\nDigite o nome do usuario:");
        gets(pessoa->nome);
        printf("\nDigite a idade do usuario:");
        scanf("%d",&pessoa->idade);
        printf("\nDigite o telefone do usuario:");
        scanf("%c",&pessoa->telefone);
        pessoa ++;
        }
}
void listar_nome(int max_user, Cadastro pessoa[]){
    int i;
    for(i=0;i<max_user;i++){
        printf("\nO nome do usuario i:%c",&pessoa[i].nome);
        }
}
void listar_tel(int max_user, Cadastro pessoa[]){
    int i;
    for(i=0;i<max_user;i++){
        printf("\nO telefone do do usuario i:%c",&pessoa[i].telefone);
        }
}
void listar_idade(int max_user, Cadastro pessoa[]){
    int i;
    for(i=0;i<max_user;i++){
        printf("\nA idade do do usuario i:%d",&pessoa[i].idade);
        }
}

int main(){
    int max_user = 0,flag = 0;
    printf("\nDigite o numero de usuarios que deseja cadastrar (maximo 10):");
    scanf("%d",&max_user);
    if(max_user>= MAX){
            printf("O número deve ser inferior a 10!");
            return 0;
            }
    system("cls");
    Cadastro pessoa[max_user];
    printf("1: Cadastrar\n2: Mostrar nomes\n3: Mostrar idades\n4:Mostrar enderecos:\n5:Sair\n");
    scanf("%d",flag);
    switch (flag)
    {
        case 1:
            cadastrar(&pessoa , max_user);
            break;
        case 2:
            listar_nome(max_user,pessoa);
            break;
        case 3:
            listar_idade(max_user,pessoa);
            break;
        case 4:
            listar_tel(max_user,pessoa);
            break;
        case 5:
            return 0;

    }
    return 0;
}

