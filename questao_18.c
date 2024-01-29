/*Escreva um programa que sorteia um caractere de ‘a’ a ‘z’ e que permita que o usuário (sem conhecer o caractere sorteado) tente acertar. Caso não acerte, o programa deve imprimir uma mensagem informando se o caractere sorteado é maior ou menor que a tentativa feita. Ao acertar o caractere, o programa deve imprimir a quantidade de tentativas feitas. Como sortear o número ( OBS.: Não esquecer de incluir o comando #include<time.h> ) 
EX: 
int letraAleatoria; 
srand(time(NULL));
letraAleatoria = (rand()%27)+’a’; // gera um caractere de ‘a’ a ‘z’*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char letra_aleatoria(int num){
    char letra;
    if(num==1){
        letra = 'a';
    }
    if(num==2){
        letra = 'b';
    }
    if(num==3){
        letra = 'c';
    }
    if(num==4){
        letra = 'd';
    }
    if(num==5){
        letra = 'e';
    }
    if(num==6){
        letra = 'f';
    }
    if(num==7){
        letra = 'g';
    }
    if(num==8){
        letra = 'h';
    }
    if(num==9){
        letra = 'i';
    }
    if(num==10){
        letra = 'j';
    }
    if(num==11){
        letra = 'k';
    }
    if(num==12){
        letra = 'l';
    }
    if(num==13){
        letra = 'm';
    }
    if(num==14){
        letra = 'n';
    }
    if(num==15){
        letra = 'o';
    }
    if(num==16){
        letra = 'p';
    }
    if(num==17){
        letra = 'q';
    }
    if(num==18){
        letra = 'r';
    }
    if(num==19){
        letra = 's';
    }
    if(num==20){
        letra = 't';
    }
    if(num==21){
        letra = 'u';
    }
    if(num==22){
        letra = 'v';
    }
    if(num==23){
        letra = 'w';
    }
    if(num==24){
        letra = 'x';
    }
    if(num==25){
        letra = 'y';
    }
    if(num==26){
        letra = 'z';
    }

    return letra;
}

int main(){
    int num;
    char letra, letra_al;

    srand(time(NULL));
    num = (rand()%27);
    letra_al = letra_aleatoria(num);

    printf("digite uma letra: ");
    scanf("%c", &letra);


    if(letra_al == letra){
        printf("voce adivinhou a letra");
    } else {
        printf("voce errou a letra, ela era %c", letra_al);
    }
}