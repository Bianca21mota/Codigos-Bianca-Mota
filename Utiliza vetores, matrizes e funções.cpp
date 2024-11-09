/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*Crie um programa em C que utilize vetores, matrizes e funções, 
sem a necessidade de passar o vetor ou matriz como parâmetro.
O programa deve seguir os seguintes passos:

O usuário deve preencher um vetor de 5 inteiros.
O programa deve calcular e exibir a soma dos elementos do vetor utilizando
uma função chamada somaVetor.Deve-se preencher uma matriz 2x2 com o valor da soma
utilizando uma função chamada preencherMatriz. Por fim, a matriz 2x2 deve ser 
exibida na tela por meio de uma função chamada imprimirMatriz*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

    int vetor[5];
    int matriz[2][2];

    //funçao 1
    int somaVetor(){
    int soma=0;
    for (int i = 0; i <5 ; i++) {
    soma+=vetor[i];
    
    }
        return soma;

    }
    
    //funçao 2
    void preencherMatriz(int soma){
    for (int i = 0; i <2 ; i++) {
    for (int j = 0; j <2 ; j++) {
    matriz[i][j]=soma;
    
    }    
    }
    }
    
    //funçao 3
    void imprimirMatriz (){
    for (int i = 0; i <2 ; i++) {
    for (int j = 0; j <2 ; j++) {
    printf("\nImprimir Matriz [%d][%d]\n", i,j);
    
    }
    }
    }
        
        
    int main() {
    setlocale(LC_ALL,"Portuguese");
    srand(time(0));
    
    for (int i = 0; i <5 ; i++) {
    printf("Digite os valores inteiros que estarão no vetor %d: ", i);
    scanf("%d", &vetor[i]);
    
    
    }
    
     int soma=somaVetor();
        printf("A soma: %d\n ", soma);

    
    
    void preencherMatriz(int soma);

    
    
    imprimirMatriz();
    
    }