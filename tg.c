#include <stdio.h>
#include <stdlib.h>

void ImprimirVetor(int k[], int tam);

#define TAM 10

int main(){
    int v[TAM];

    puts("Digite 10 valores inteiros:");

    for(int i=0; i<TAM; i++){
        scanf("%d",&v[i]);
    }

    ImprimirVetor(v,TAM);
}

void ImprimirVetor(int k[], int tam){
    for(int i=0; i<TAM;i++){
        printf("%d\t",k[i]);
    }

    printf("\n");
}