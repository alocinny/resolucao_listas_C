/*Faça um algoritmo que calcule o termial e o fatorial de um número:*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int num, fatorial = 1;
    int termial = 0;
    
    printf("digite um numero: ");
    scanf("%d", &num);

    do{
        fatorial *= num;
        termial += num;
        num--;
    }while(num!=0);

    printf("\no termial eh: %d\ne o fatorial eh: %d", termial, fatorial);
}
