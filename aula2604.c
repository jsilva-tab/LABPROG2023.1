// construir 2 matrizes preenchidas aleatoriamente
// inserir o produto da multiplicaçao numa 3 matriz

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MX 9
#define SFT 0

int **alocarMatriz(int qtdLin, int qtdCol);
void preencherMatriz(int **mat, int qtdLin, int qtdCol, int ini, int max);
void imprimirMatriz(int **mat, int qtdLin, int qtdCol);
void multMatriz(int **a, int **b, int **c, int qtdLin, int qtdCol);

int main(int argc, char **argv){
    int **ma = NULL, **mb = NULL, **mc = NULL;
    
    if(argc!=3){
        printf("Use:\n\t %s <qtdLin> <qtdCol>\n\n",*argv);
        exit(1);
    }

    int lin = atoi(*(argv+1)); //argv[1]
    int col = atoi(*(argv+2)); //argv[2]

    ma = alocarMatriz(lin,col);
    mb = alocarMatriz(lin,col);
    mc = alocarMatriz(lin,col);

    if(!((ma && mb) && mc)){
        puts("Não tem memória disponível.");
        exit(1);
    }

    srand(time(NULL));

    preencherMatriz(ma,lin,col,SFT,MX);
    preencherMatriz(mb,lin,col,SFT,MX);

    multMatriz(ma,mb,mc,lin,col);

    puts(" -- Matriz A -- ");
    imprimirMatriz(ma,lin,col);
    
    puts(" -- Matriz B -- ");
    imprimirMatriz(mb,lin,col);

    puts(" -- Matriz C -- ");
    imprimirMatriz(mc,lin,col);

    return 0;
}

int **alocarMatriz(int qtdLin, int qtdCol){
    int **mat = NULL;
    if (!(mat = (int **) malloc(qtdLin*sizeof(int *)) )){
        return NULL;
    }

    for(int k=0; k<qtdLin; k++){
        if (!(*(mat+k) = (int *) malloc(qtdCol*sizeof(int)) )){
            return NULL;
        }
    }
    return mat;
}

void preencherMatriz(int **mat, int qtdLin, int qtdCol, int ini, int max){
    for(int k=0; k<qtdLin; k++){
        for(int j=0; j<qtdCol; j++){
            *(*(mat+k)+j) = ini + rand()%MX;
        }
    }
}

void imprimirMatriz(int **mat, int qtdLin, int qtdCol){
    for(int k=0; k<qtdLin; k++){
        for(int j=0; j<qtdCol; j++){
            printf("%5d\t",*(*(mat+k)+j));
        }
        printf("\n");
    }
}

void multMatriz(int **a, int **b, int **c, int qtdLin, int qtdCol){
    for(int k=0; k<qtdLin; k++){
        for(int j=0; j<qtdCol; j++){
            *(*(c+k)+j) = *(*(a+k)+j) * *(*(b+k)+j);
        }
    }
}