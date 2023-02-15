#include <stdio.h>

int main(){
    int valor,result;
    
    puts("Digite um valor inteiro:");
    scanf("%d",&valor);

    result = ((valor%2)==0) ? valor*2: valor;
    // 'result' é a variavel que vai receber a condição do if, em seguida tem-se a condição
    //depois do ? é o if e depois do : é o else
    // ou result *= valor%2==0?2:1;
    // versão mais sofisticada:
    // x *= (x%2)?1:2;

    printf("%d\n",result);
    return 0;
}
