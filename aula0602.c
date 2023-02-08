#include <stdio.h>

int main(){
    int a, b=5, c;
    float x;

    unsigned long int tam;

    printf("Valor de b: %d\nValor de a: %d\n",b,a);

    puts("Espaço ocupado em memória: ");
    printf("int: %lu\n",sizeof(int));
    printf("long int: %lu\n",sizeof(long));
    printf("short int: %lu\n",sizeof(short));
    printf("float: %lu\n",sizeof(float));
    printf("char: %lu\n",sizeof(char));

    tam = sizeof(double);

    printf("double: %lu \n",tam);

    //sizeof -> nome da variavel ou o tipo
    return 0;
}