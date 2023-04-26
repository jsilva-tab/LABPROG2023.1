#include <stdio.h>

void Soma(int*, int *, int *);
void Sub(int*, int *, int *);

int main(){
    int x,y,res,esc;

    puts("Digite o valor de x sua p**a:");
    scanf("%d",&x);
    puts("Digite o valor de y sua c****ha:");
    scanf("%d",&y);

    puts("Escolha uma das alternativas:");
    puts("1. Soma \t 2. Subtração");
    scanf("%d",&esc);

    switch (esc)
    {
    case 1:
       Soma(&x,&y,&res);
        break;

    case 2:
        Sub(&x,&y,&res);
        break;
    
    default:
        puts("Digite um número entre os sugeridos.");
        break;
    }
    return 0;
}

void Soma(int *px, int *py, int *res){
    *res = *px+*py;
    printf("%d\n",*res); 
}

void Sub(int *px, int *py, int *res){
    *res = *px-*py;
    printf("%d\n",*res);
}