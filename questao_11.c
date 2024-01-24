/*Codifique uma calculadora, com suas quatro funções básicas ( + , - , * , / ).*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float num_1, num_2;
    char operador;

    printf("digite o primeiro numero: ");
    scanf("%f", &num_1);

    printf("digite o operador ('*' -> multiplicacao, '/' -> divisao, '-' -> subtracao, '+' -> soma): ");
    scanf("%s", &operador);

    printf("digite o segundo numero: ");
    scanf("%f", &num_2);

    if(operador == '/'){
        float divisao = num_1/num_2;
        printf("o resultado eh: %4.2f", divisao);
    } else {
        if(operador == '*'){
                float multiplicacao = num_1*num_2;
                printf("o resultado eh: %4.2f", multiplicacao);
        } else {
            if(operador == '+'){
                float soma = num_1+num_2;
                printf("o resultado eh: %4.2f", soma);
            } else {
                if(operador == '-'){
                    float subtracao = num_1-num_2;
                    printf("o resultado eh: %4.2f", subtracao);
                } else {
                    printf("algo deu errado tente novamente");
                }
            }
        }
    }
}