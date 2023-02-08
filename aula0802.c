#include <stdio.h>

int main(){
    //declarar duas variáveis e trocar os valores
    int a=3, b=2,c;
    c = a;
    a = b;
    b = c;
    
    printf("Valor de A=%d e B=%d\n\n",a,b);
    return 0;
}