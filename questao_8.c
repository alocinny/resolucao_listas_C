/*Escreva um algoritmo que receba um numero inteiro maior que 10 e imprima a mensagem
“E PAR” se a soma dos seus algarismos for um numero par ou “E IMPAR” se a soma for um
numero impar*/

#include <stdio.h>
#include <conio.h>

int main(){
    int soma, i; int one =0; int two = 0; int three = 0; int four = 0; int five = 0; int six =0; int seven = 0; int eigth = 0; int nine = 0;
    char num[10];


    printf("digite um numero maior que 10: ");
    scanf("%s", &num);

    for(i=0;i<10;i++){
        if(num[i]=='1'){
            one++;
        }
        if(num[i]=='2'){
            two++;
        }
        if(num[i]=='3'){
            three++;
        }
        if(num[i]=='4'){
            four++;
        }
        if(num[i]=='5'){
            five++;
        }
        if(num[i]=='6'){
            six++;
        }
        if(num[i]=='7'){
            seven++;
        }
        if(num[i]=='8'){
            eigth++;
        }
        if(num[i]=='9'){
            nine++;
        }
    }

    soma = one + (two*2) + (three*3) + (four*4) + (five*5) + (six*6) + (seven*7) + (eigth*8) + (nine*9);

    if(soma%2==0){
        printf("a soma eh par (resultado da soma = %d)", soma);
    } else {
        printf("a soma eh impar (resultado da soma = %d)", soma);
    }

}