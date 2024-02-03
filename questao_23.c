#include <stdio.h>
#include <stdlib.h>

int main(){

    int cpf, idade, curso, nota_media;
    int maior_media_comp = 0; int cpf_maior_all; int maior_media_all = 0;
    int masc_comp = 0; int fem_comp = 0; int masc_ele = 0; int fem_ele = 0; int masc_civil = 0; int fem_civil = 0;
    char sexo;

    do{
        printf("\ndigite 0 no cpf para obter o resultado");

        printf("\n\nCPF: ");
        scanf("%d", &cpf);


        if(cpf!=0){
            printf("idade: ");
            scanf("%d", &idade);

            printf("sexo [f,m]: ");
            scanf("%s", &sexo);

            printf("1-computacao\n2-eletronica\n3-civil\ncurso: ");
            scanf("%d", &curso);

            printf("nota media: ");
            scanf("%d", &nota_media);

            if(nota_media>maior_media_all && nota_media>maior_media_comp){
                cpf_maior_all = cpf;
                maior_media_all = nota_media;
                if(curso==1){
                    maior_media_comp = nota_media;
                }
            }

            switch(curso){
                case 1:
                    switch(sexo){
                        case 'f':
                            fem_comp++;
                            break;
                        case 'm':
                            masc_comp++;
                            break;
                    }
                break;
                case 2:
                    switch(sexo){
                        case 'f':
                            fem_ele++;
                            break;
                        case 'm':
                            masc_ele++;
                            break;
                    }
                break;
                case 3:
                    switch(sexo){
                        case 'f':
                            fem_civil++;
                            break;
                        case 'm':
                            masc_civil++;
                            break;
                    }  
                break;
            }
        }

    }while(cpf!=0);

    printf("\n\ncpf do candidato com maior media em todos os cursos: %d", cpf_maior_all);
    printf("\n\nproporcao homens e mulheres por curso");
    printf("\nCIVIL:\nhomens: %d\nmulheres: %d", masc_civil, fem_civil);
    printf("\nCOMPUTACAO:\nhomens: %d\nmulheres: %d", masc_comp, fem_comp);
    printf("\nELETRONICA:\nhomens: %d\nmulheres: %d", masc_ele, fem_ele);
    printf("\nmaior media entre os cadidatos para o curso de computacao: %d", maior_media_comp);
}