#include <stdio.h>
#include <math.h>
#define SOMA(ptA,ptB,soma)\
            ({soma.x = ptA.x + ptB.x;\
            soma.y = ptA.y + ptB.y;})
#define RECEBEPT(c, ptA) \
            ({printf("entre com a coordenada x de %c ",c); \
            scanf("%f",&ptA.x);\
            printf("entre com a coordenada y de %c ",c); \
            scanf("%f",&ptA.y);})
#define DISTANCIA(ptA,ptB,dist) \
                ({dist = (sqrt((pow(ptA.x-ptB.x , 2.f))+(pow(ptA.y-ptB.y , 2.f))));})
#define MOSTRAR(ptA,ptB,S,dist)\
        (printf("Ponto A: (%g; %g)\nPonto B: (%g; %g) \nSoma:(%g; %g)\nDistancia: %g",ptA.x,ptA.y,ptB.x,ptB.y,S.x,S.y,dist))

typedef struct Ponto{
    float x;
    float y;
}Ponto;

int main(){
Ponto A,B,S;
float dist;
RECEBEPT('A',A);
RECEBEPT('B',B);
SOMA(A,B,S);
DISTANCIA(A,B,dist);
MOSTRAR(A,B,S,dist);
return 0;
}
