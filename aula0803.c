// Questão PRODUTÓRIO, onde xi = i+i/1
#include <stdio.h>
#include <stdlib.h>

int main(){
    //Entrada
    int m,n;
    puts("Digite o limite inferior:");
    scanf("%d",&m);
    puts("Digite o limite superior:");
    scanf("%d",&n);
    
    // Validação dados de entrada
    if(m>n){
        puts("Dados de entrada inválidos.");
        exit(1);
    }

    //Processamento
    float resultado=1;
    for(int i=m;i<=n;i++){
        resultado=resultado*(i+1/(float)i);
    }

    //Saída
    printf("Resultado:%.2f\n",resultado);
    return 0;
}
