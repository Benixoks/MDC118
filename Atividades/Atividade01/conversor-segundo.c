#include <stdio.h>
int main(){
    int x;
    int hr = 0;
    int min = 0;

    printf("Insira a quantidade de tempo em segundos\n");
    scanf("%d", &x);
    for(hr = 0; x >= 3600; hr++){
        x -= 3600;
    }
    for(min = 0; x >= 60; min++){
        x -= 60;
    }
    printf("%d horas %d minutos %d segundos.\n",hr,min,x);
    printf("%d:%d:%d\n",hr,min,x);
    return 0;
}