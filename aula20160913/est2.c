#include <stdio.h>
#include <math.h>
#define SOMA(a,b,c,d,e,f,sx,sy,sz) ((sx=a+b)&&(sy=c+d)&&(sz=(e+f)))
#define DISTANCIA(a,b,c,d,e,f) (sqrt(((a-b)*(a-b))+((c-d)*(c-d))+((e-f)*(e-f))))
#define MOSTRAR(a,b,c,d,e,f,sx,sy,sz,dist) (printf("os numeros sao:\n1_a:%.4f,%.4f,%.4f\n2_b:%.4f,%.4f,%.4f\n3_Soma:%.4f,%.4f,%.4f\n_Distancia:%.4f\n",a,b,c,d,e,f,sx,sy,sz,dist))
int main(){
    float x1,x2,z1,y1,y2,z2,sx,sy,sz,dist;
    printf("Digite dois pontos para saber a soma!\n");
    scanf("%f %f %f",&x1,&y1,&z1);
    scanf("%f %f %f",&x2, &y2 ,&z2);
    SOMA(x1,x2,y1,y2,z1,z2,sx,sy,sz);
    dist = DISTANCIA(x1,x2,y1,y2,z1,nz2);
    MOSTRAR(x1,y1,z1,x2,y2,z2,sx,sy,sz,dist);
    return 0;
}
