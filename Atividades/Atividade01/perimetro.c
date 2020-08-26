#include <stdio.h>

int main(){
    printf("Insira o raio da circunferencia\n");
    float raio, circ;
    scanf("%f", &raio);
    float pi = 3.1416;
    circ = 2*pi*raio;
    printf("A circunferencia deste circulo é: %.2f\n", circ);
    
    return 0;
}