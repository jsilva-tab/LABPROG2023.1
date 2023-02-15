#include <stdio.h>

int main(){
    int valor,result;
    
    puts("Digite um valor inteiro:");
    scanf("%d",&valor);

    result = ((valor%2)==0) ? valor*2: valor;
    // ou result *= valor%2==0?2:1;

    printf("%d\n",result);
    return 0;
}