/*Implemente uma função que recebe dois inteiros como argumento e mostra o seu MMC(mínimo múltiplo comum).
Ex.: MMC de 2 e 9 é o número 18*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int num_1, num_2, num1, num2;
    int i, j, teste;

    printf("digite um numero: ");
    scanf("%d", &num_1);

    printf("digite outro numero: ");
    scanf("%d", &num_2);

    teste = num_1>num_2 ? num_1:num_2;

    for(i=1;i<=teste;i++){
        for(j=1;j<=teste;j++){
            num1 = num_1*i;
            num2 = num_2*j;
            if(num1==num2){
                break;
            }
        } 
        if(num1==num2){
            break;
        }
    }
    printf("o mmc eh: %d", num1);
}