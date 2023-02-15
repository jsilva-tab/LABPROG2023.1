#include <stdio.h>

//trocando os valores sem uma 3ª variavel
//usando ou exclusivo

int main(){
    int a,b;

    puts("Digite o valor de a:");
    scanf("%d",&a);
    puts("Digite o valor de b:");
    scanf("%d",&b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("a = %d\nb = %d\n",a,b);

    return 0;
}