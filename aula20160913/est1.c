#include <stdio.h>
#include <math.h>
#define SOMA(a,b,c,d,sx,sy) ((sx=a+b)&&(sy=c+d))
#define DISTANCIA(a,b,c,d) (sqrt(((a-b)*(a-b))+((c-d)*(c-d))))
#define MOSTRAR(a,b,c,d,sx,sy,dist) (printf("os numeros sao:\n1_a:%.4f,%.4f\n2_b:%.4f,%.4f\n3_Soma:%.4f,%.4f\n4_Distancia:%.4f\n",a,b,c,d,sx,sy,dist))
int main(){
    float x1,x2,y1,y2,sx,sy,dist;
    printf("Digite dois pontos para saber a soma!\n");
    scanf("%f %f",&x1,&y1);
    scanf("%f %f",&x2, &y2);
    SOMA(x1,x2,y1,y2,sx,sy);
    dist = DISTANCIA(x1,x2,y1,y2);
    MOSTRAR(x1,x2,y1,y2,sx,sy,dist);
    return 0;
}
