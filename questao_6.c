/*Faça um algoritmo que implemente o cadastro de um número de alunos digitado pelo usuário, enquanto o Número da Matricula for diferente de 0. O programa deve pedir as seguintes informações:
1. Informe o NÚMERO DE MATRICULA do aluno;
2. Informe a IDADE do aluno;
3. Informe o SEXO do aluno(“M” ou “F”);
4. Informe o Nível de ensino do aluno:(1-Ensino Fundamental) (2-Ensino Médio)(3-Ensino Superior)
E ao final do algoritmo apresente:
- O número de estudantes do sexo Masculino com mais de 18 anos
- O total de estudantes dessa Instituição
- Porcentagem de estudantes do sexo Feminino no Ensino Superior
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero_matricula, idade, nivel_ensino;
    char sexo;
    int estudante_sexo_M_maior_18 = 0;
    int estudante_sexo_F_superior = 0;
    int total_estudantes = 0;
    float porcentagem;

    do{
        printf("\nDigite o numero de matricula do aluno(a): ");
        scanf("%d", &numero_matricula);

        if (numero_matricula == 0) {
            break;
        }

        printf("\nDigite a idade do aluno(a): ");
        scanf("%d", &idade);

        printf("\nDigite o sexo do aluno(a) | m ou f |: ");
        scanf("%s", &sexo);

        printf("\n(1-Ensino Fundamental)\n(2-Ensino Médio)\n(3-Ensino Superior)\nDigite o nivel de ensino do aluno(a): ");
        scanf("%d", &nivel_ensino);

        if(idade > 18 && sexo == 'm' ){
            estudante_sexo_M_maior_18++;
        }
        if(sexo == 'f' && nivel_ensino == 3){
            estudante_sexo_F_superior++;
        }

        total_estudantes++;
    }while(numero_matricula!=0);

    porcentagem = (estudante_sexo_F_superior/(float)total_estudantes)*100;

    printf("\nO numero de estudantes do sexo Masculino com mais de 18 anos: %d", estudante_sexo_M_maior_18);
    printf("\nO total de estudantes dessa Instituicao: %d", total_estudantes);
    printf("\nPorcentagem de estudantes do sexo Feminino no Ensino Superior: %4.2f%%", porcentagem);
}