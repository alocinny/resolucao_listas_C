/*Faça a seguinte soma: S = 2/3 + 3/4 + 4/5 + 5/6 + ... + 99/100*/

#include <stdio.h>

int main(){
    int i = 2, k = 3;
    float soma = 0;

    do {
        soma += (float)i/(float)k;
        i++;
        k++;
        printf("\n%f", soma);
    }while(k!=100 && i!=99);

    printf("%f", soma);
}