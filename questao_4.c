/*Faça um algoritmo que, dada a idade de um jogador classifique-o em uma das seguintes
categorias:
Infantil = 5 - 10 anos
Sub 13= 10 - 13 anos
Sub 15= 14- 15 anos
Sub 17 = 16 - 17 anos
Profissional = 18 - 36 anos
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    unsigned int idade;

    printf("Digite a idade do jogador: ");
    scanf("%d", &idade);

    if(idade == 5 && idade < 10){
        printf("sua categoria eh infantil");
    }
    if(idade == 10 && idade <= 13){
        printf("sua categoria eh sub 13");
    }
    if(idade == 14 && idade <= 15){
        printf("sua categoria eh sub 15");
    }
    if(idade == 16 && idade <= 17){
        printf("sua categoria eh sub 17");
    }
    if(idade == 18 && idade < 36){
        printf("sua categoria eh profissional");
    }

}