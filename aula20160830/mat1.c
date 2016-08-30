#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    float c_x1=0,c_y1=0,dist=0,c_x2=0,c_y2=0;
    printf("\nPor favor digite as coordenadas x1 e y1:\n");
    scanf("%f\n%f",&c_x1,&c_y1);
    printf("\nPor favor digite as coordenadas x2 e y2:\n");
    scanf("%f\n%f",&c_x2,&c_y2);
    dist = sqrt(pow(c_x2-c_x1,2.)+pow(c_y2-c_y1,2.));
    printf("\n%f",dist);
    return 0;
}
