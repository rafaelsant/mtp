#include <stdlib.h>
#include <stdio.h>

//void media();
//int inserir(int N,float *num);

int main(){
    float *num1;
    int N=1,i=0;
    int end;
    num1=(float *)malloc(sizeof(float));
    scanf("%f", num1);
    if(*num1 =! 0){
        while(*num1 != 0)
        {
            printf("\n%d\n",&num1);
            num1 = realloc(num1,N*sizeof(float *));
            scanf("%f", num1+1);
            printf("\n%f",num1);
            N++;
            }
    }
    for(i = 0;i<=N;i++){
        printf("\n[%d]-%f\n",i,num1);
        num1++;
    }
    printf("\n%d\n",num1);
    free(num1);
    return 0;
}
