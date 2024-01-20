#include <stdio.h>
#include <stdlib.h>
#define TAM 10

/*
Leia a nota de 10 alunos e escreva na tela a maior nota, a menor nota e a média
*/

int main () {
   float notas[TAM], aux, maior_nota, menor_nota, media, soma=0;
   int i,j,k;

   for (k=0;k<TAM;k++) {
      printf("nota %d:\n", k+1);
      scanf("%f", &notas[k]);
   }

//metodo bubble sort para ordenar a array (ordem crescente)
   for(i=1;i<TAM;i++){
    for(j=0;j<TAM-1;j++){
        if(notas[j]>notas[j+1]){
            aux=notas[j];
            notas[j]=notas[j+1];
            notas[j+1]=aux;
        }
    }
   }

    maior_nota = notas[TAM-1];
    menor_nota = notas[0];

    for(k=0;k<10;k++){
        soma = soma + notas[k];
    }

    media = soma/10;

    printf("a maior nota eh: %4.2f\na menor nota eh: %4.2f\na media eh: %4.2f", maior_nota, menor_nota, media);

   return 0;
}
