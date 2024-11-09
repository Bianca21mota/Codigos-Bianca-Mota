#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

#define MAX_ALUNOS 10
#define N_NOTAS 3

    typedef struct {
    char nome[60];
    float notas[N_NOTAS];
    float media;
    } Aluno;

        Aluno alunos[MAX_ALUNOS];
        int qtd_alunos = 0;

        void adicionarAluno();
        void calcularMedia();
        void exibirAlunos();
        void alunoMaiorMedia();

        int main() {
        int op;

        do {
        printf("\nSistema de Gerenciamento de Alunos\n");
        printf("1. Adicionar aluno e notas\n");
        
        printf("2. Calcular e exibir a media de cada aluno\n");
        printf("3. Exibir todos os alunos\n");
        
        printf("4. Exibir o aluno com maior media\n");
        printf("5. Sair\n");
        printf("\nEscolha uma opcao: ");
        scanf("%d", &op);

        switch (op) {
            case 1:
                adicionarAluno();
                break;
            case 2:
                calcularMedia();
                break;
            case 3:
                exibirAlunos();
                break;
            case 4:
                alunoMaiorMedia();
                break;
            case 5:
                printf("Voce optou por sair...\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente mais tarde.\n");
                
              }
              } while (op != 5);

              }


             // op1
             void adicionarAluno() {
             if (qtd_alunos >= MAX_ALUNOS) {
             printf("O limite atingido.\n");
             printf("Nao e permitido adicionar mais alunos.\n");
             
             }

             Aluno nv_aluno;
             printf("Digite o nome do novo aluno: ");
             scanf(" %[^\n]", nv_aluno.nome); //leitura da linha inteira + operador de acesso a membro 

            float soma = 0;
            for (int i = 0; i < N_NOTAS; i++) {
            printf("Digite a nota %d: ", i + 1);
            scanf("%f", &nv_aluno.notas[i]);
            soma += nv_aluno.notas[i];
            
             }

            nv_aluno.media = soma / N_NOTAS;
            alunos[qtd_alunos++] = nv_aluno;
            printf("Concluido. O aluno foi adicionado !\n");
            
             }

            // op2
            void calcularMedia() {
            if (qtd_alunos == 0) {
            printf("Nenhum aluno foi cadastrado. Entao, nao e possivel calcular a media.\n");
            
             }

            printf("\nAs medias dos alunos:\n");
            for (int i = 0; i < qtd_alunos; i++) {
            printf("Nome: %s, Media: %.2f\n", alunos[i].nome, alunos[i].media);
            
            }
            }

          // op3
            void exibirAlunos() {
            if (qtd_alunos == 0) {
            printf("Nenhum aluno foi cadastrado. Entao, nao e possivel exibir os alunos\n");
             
            }

           printf("\nLista de Alunos:\n");
           for (int i = 0; i < qtd_alunos; i++) {
           printf("Nome: %s, Media: %.2f\n", alunos[i].nome, alunos[i].media);//operador 
            }
            }

           // op4
           void alunoMaiorMedia() {
           if (qtd_alunos == 0) {
           printf("Nenhum aluno foi cadastrado. Entao, nao e possivel exibir o aluno com a maior media\n");
            }

           int posi_MaiorMed = 0;
           for (int i = 1; i < qtd_alunos; i++) {
           if (alunos[i].media > alunos[posi_MaiorMed].media) {
           posi_MaiorMed = i;
            }
            }

           printf("\nAluno com a maior media:\n"); //maior
           printf("Nome: %s, Media: %.2f\n", alunos[posi_MaiorMed].nome, alunos[posi_MaiorMed].media);
           
           }
