#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    float notaA,notaB,notaC,media;
    printf("\nPor favor digite as notas dos alunos A,B e C:\n");
    scanf("%f",&notaA);
    scanf("%f",&notaB);
    scanf("%f",&notaC);
    if(notaA && notaB && notaC <= 10.0){
        media = (((notaA*2)+(notaB*3)+(notaC*5))/10);
        printf("\nA média é:\n%f\n",media);
    }
    else
        printf("\n As notas devem conter valores de 0.0 a 10.0!\n");
    return 0;
}
