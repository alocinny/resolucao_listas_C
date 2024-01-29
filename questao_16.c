/*) Escrever um programa que leia, valores inteiros, até ser lido o valor-99. Quando isso acontecer o programa deverá escrever a soma e a média dos valores lidos*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int i = 0;
    float soma = 0; int num = 0; 
    float media;

    do{
        i++;
        soma += (float)num;

        printf("digite um numero: ");
        scanf("%d", &num);
        
    }while(num!=-99);

    i-=1;

    media = soma/(float)i;

    printf("soma: %4.2f\nmedia %4.2f", soma, media);
}