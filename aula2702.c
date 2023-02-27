#include <stdio.h>
#include <stdlib.h>

int soma(int a, int b);
int sub(int a, int b);
int mult(int a, int b);
int divisao(int a, int b);

int main(){
    //Entrada de Dados
    int op,var1,var2,saida;

    puts("Digite o primerio valor:");
    scanf("%d",&var1);
    puts("Digite o primerio valor:");
    scanf("%d",&var2);

    puts("Escolha uma das opções a seguir:");
    puts("1. Soma");
    puts("2. Subtração");
    puts("3. Multiplicação");
    puts("4. Divisão");
    scanf("%d",&op);

    // Processamento
    switch (op)
    {
    case 1:
    saida = soma(var1,var2);
    break;

    case 2:
    saida = sub(var1,var2);
    break;

    case 3:
    saida = mult(var1,var2);
    break;

    case 4:
    saida = divisao(var1,var2);
    break;
    
    default:
        puts("Digite uma das alternativas oferecidas.");
        exit(1);
    }
    // Saída
    printf("Resultado da operação: %d\n",saida);
    return 0;
}

int soma(int a, int b){
    return (a+b);
}

int sub(int a, int b){
    return (a-b);
}

int mult(int a, int b){
    return (a*b);
}
