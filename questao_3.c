#include <stdio.h>
#include <stdlib.h>
#define TAM 3

int main(){
    int i,j,k;
    float num[TAM], aux;

    for(k=0;k<TAM;k++){
        printf("digite o numero %d: ", k+1);
        scanf("%f", &num[k]);
    }

    for(i=1;i<TAM;i++){
        for(j=0;j<TAM-1;j++){
            if(num[j]>num[j+1]){
                aux = num[j];
                num[j]=num[j+1];
                num[j+1]=aux;
            }
        }
    }

    printf("o maior numero eh: %4.2f", num[TAM-1]);
}