#include <stdio.h>
int main(){
    float giga;
    int bytes;
    printf("Insira uma quantidade de Gigabytes:\n");
    scanf("%f", &giga);
    bytes = giga*1024000;
    printf("%d\n", bytes);
    return 0;
}