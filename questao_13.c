/*Crie um programa que imprima na tela se um número digitado pelo usuário é primo ou não.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int num, i; int qnt = 0;

    printf("digite um numero inteiro positivo: ");
    scanf("%d", &num);

    for(i=1;i<=num;i++){
        if(num%i == 0){
            qnt++;
        }
    }
    if(qnt == 2){
        printf("esse numero eh primo");
    } else {
        printf("esse numero nao eh primo");
    }
}