/*Escreva um algoritmo que receba o numero de habitantes do pais A e do pais B e suas porcentagens de crescimento ao ano e imprima o numero de anos necessarios para a população do país A ultrapassar a populacao do país B , se a populacao do Pais B for maior que a do Pais A, faca o inverso.
Ex.:
•População pais A: 9000, 10,0% de crescimento
•População pais B: 18000, 5,0% de crescimento*/

int main(){
    float A, B;
    float taxa_A, taxa_B;

    printf("digite o numero de habitantes do pais A: ");
    scanf("%f", &A);

    printf("digite sua porcentagem de crescimento ao ano: ");
    scanf("%f", &taxa_A);

    printf("digite o numero de habitantes do pais B: ");
    scanf("%f", &B);

    printf("digite sua porcentagem de crescimento ao ano: ");
    scanf("%f", &taxa_B);

    if(A>=B){
        int anos=0;

        while(A>=B){
            A=A*(1+taxa_A/100);
            B=B*(1+taxa_B/100);
            anos++;
        }

        printf("faltam %d anos para a populacao  do pais B superar a do pais A", anos);
    } else {
        int anos=0;

        while(A<=B){
            A=A*(1+taxa_A/100);
            B=B*(1+taxa_B/100);
            anos++;
        }

        printf("faltam %d anos para a populacao  do pais A superar a do pais B", anos);
    }

}