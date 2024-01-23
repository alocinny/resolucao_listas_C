/* Faça um programa que receba duas datas criadas pelo usuário e imprima na tela quantos anos, meses e dias faltam para a menor data alcançar a maior data.
Obs: COnsidere o mês com 30 dias. E valide todas as entradas
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int dia_1, dia_2, dia_aux;
    int mes_1, mes_2, mes_aux;
    int ano_1, ano_2, ano_aux;
    int  dias, meses_dia, anos_dias, dias_total;
    int dia, mes, ano;

    printf("digite a primeira data: ");
    scanf("%d/0%d/%d", &dia_1, &mes_1, &ano_1);

    printf("digite a segunda data: ");
    scanf("%d/0%d/%d", &dia_2, &mes_2, &ano_2);
    
    //validando as entradas
    if(dia_1>30 || dia_1<0 || dia_2>30 || mes_1>12 || mes_1<0 || mes_2>12 || mes_2<0 || ano_1<0 || ano_2<0){
        printf("data invalida, por favor tente novamente");
    } else {
        //deixando sempre a primeira data como a maior data
        //primeira condicao ok
        if(ano_2>ano_1){
            //invertendo  o ano
            ano_aux = ano_2;
            ano_2 = ano_1;
            ano_1 = ano_aux;

            //invertendo os meses
            mes_aux = mes_2;
            mes_2 = mes_1;
            mes_1 = mes_aux;

            //invertendo os dias
            dia_aux = dia_2;
            dia_2 = dia_1;
            dia_1 = dia_aux;

            printf("data 1: %d/0%d/%d | data 2: %d/0%d/%d", dia_1, mes_1, ano_1, dia_2, mes_2, ano_2);
        }
        if(mes_2>mes_1 && (ano_1>ano_2 || ano_1==ano_2)){

            //invertendo o ano
            ano_aux=ano_2;
            ano_2 = ano_1;
            ano_1 = ano_aux;

            //invertendo o mes
            mes_aux = mes_2;
            mes_2 = mes_1;
            mes_1 = mes_aux;

            //invertendo os dias
            dia_aux = dia_2;
            dia_2 = dia_1;
            dia_1 = dia_aux;

            printf("data 1: %d/0%d/%d | data 2: %d/0%d/%d", dia_1, mes_1, ano_1, dia_2, mes_2, ano_2);
        }
        if(dia_2>dia_1 && (mes_1==mes_2 || mes_1 > mes_2) && (ano_1==ano_2 || ano_1>ano_2)){
            //invertendo o ano
            ano_aux=ano_2;
            ano_2 = ano_1;
            ano_1 = ano_aux;

            //invertendo o mes
            mes_aux = mes_2;
            mes_2 = mes_1;
            mes_1 = mes_aux;

            //invertendo os dias
            dia_aux = dia_2;
            dia_2 = dia_1;
            dia_1 = dia_aux;

            printf("data 1: %d/0%d/%d | data 2: %d/0%d/%d", dia_1, mes_1, ano_1, dia_2, mes_2, ano_2);
        }
        
        //tranformando anos que faltam em dias
        anos_dias = (ano_1 - ano_2)*365;
        //transformando meses que faltam em dias
        meses_dia = (mes_1-mes_2)*30;
        //transformando dias que faltam em dias
        dias = (dia_1 - dia_2);

        dias_total = anos_dias + meses_dia + dias;

        if(dias == 365){
            printf("falta exatamente um ano");
        }
        
        ano = dias_total/365;
        mes = (dias_total%365)/30;
        dia = ((dias_total%365)%30);

        printf("faltam %d ano(s), %d mes(e)s e %d dia(s) para que a data %d/%d/%d chegue a data %d/%d/%d", ano, mes, dia, dia_2, mes_2, ano_2, dia_1, mes_1, ano_1);
    }
}