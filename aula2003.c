#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 20
#define FAIXA 50 
#define SF 0 //shift

void imprimirVetor(unsigned x[],unsigned tam);

int main(){
    unsigned v[TAM]; //unsigned int

    srand(time(NULL));

    //Dados
    for(int k=0;k<TAM;k++){
        v[k]=(rand()%FAIXA)+SF;
    }
    puts("Vetor Desordenado: ");
    imprimirVetor(v,TAM);

    //Processamento. Ordenação por seleção - Decrescente
    for(int k=0;k<TAM-1;k++){
        for(int j=k+1;j<TAM;j++){
            if(v[k]<v[j]){
                v[k] = v[k]^v[j];
                v[j] = v[k]^v[j];
                v[k] = v[k]^v[j];
            }
        }
    }

    //Saída
    puts("Vetor Ordenado: ");
    imprimirVetor(v,TAM);

    return 0;
}

void imprimirVetor(unsigned x[],unsigned tam){
    for (int k=0;k<tam;k++){
        printf("%u ",x[k]);
    }
    printf("\n");
}