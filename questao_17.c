/*Escreva um programa em C que solicite ao usuário um número > 5(valide) e desenha uma figura conforme esquema ilustrado no exemplo abaixo
numero: 7
#######
##   ##
# # # #
#  #  #
# # # #
##   ##
#######*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int num, i, j;

    printf("digite um numero: ");
    scanf("%d", &num);

    if(num<5){
        printf("o numero digitado foi menor do que 5, por favor tente novamente");
    } else {
        for(i=0;i<num;i++){
            printf("\n");
            for(j=0;j<num;j++){
                if(j==0 || j==num-1 || i==0 || i==num-1 || j==i || i+j == num-1){
                    printf("#");
                } else {
                    printf(" ");
                }
            }
        }
    }
}