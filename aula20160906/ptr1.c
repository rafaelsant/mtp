#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int i = 0;
    unsigned int a = 0xFACA8421;
    printf("\n%u \n%x\n", a, &a);
    unsigned char *ptr;
    ptr = (unsigned char *) &a;
    for(i=0;i<4;i++){
        printf("\n%p : %X\n",ptr, *ptr);
        ptr++;
    }
    return 0;
}
