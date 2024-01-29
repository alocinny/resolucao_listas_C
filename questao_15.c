/* Fazer um programa que recebe 3 valores não inteiros do usuário e mostra o maior deles, o menor deles e a média*/

int main(){
    int i, j, k;
    float num[3], media, aux;

    for(i=0;i<3;i++){
        printf("digite o numero %d: ", i+1);
        scanf("%f", &num[i]);
    }

    for(j=1;j<3;j++){
        for(k=0;k<3-1;k++){
            if(num[k+1]>num[k]){
                aux = num[k+1];
                num[k+1] = num[k];
                num[k]=aux;
            }
        }
    }

    media = (num[0]+num[1]+num[2])/3;

    printf("o maior numero eh: %4.2f", num[0]);
    printf("o menor numero eh: %4.2f", num[2]);
    printf("a media eh: %f", media);
}