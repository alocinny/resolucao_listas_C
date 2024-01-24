/*Faça um programa que escreva na tela todos os números ímpares existentes no intervalo [0,250] e depois imprima a sua soma*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int i; int soma = 0;

    for(i=0;i<250;i++){
        if(i%2 != 0){
            printf("\n%d", i);
            soma += i;
        }
    }
    printf("\nresultado da soma dos numero imapres entre 0 e 250: %d", soma);
}