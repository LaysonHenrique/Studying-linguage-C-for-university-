#include <stdio.h>
#include <string.h>
#define MAX 30

/*
ESSE PEQUENO PROGRAMA SERVE COMO UMA CALCULADORA SIMPLES, SIMPLESMENTE PARA TREINAMENTO NA LINGUAGEM C E TESTES DE COMMIT! AT� AS OPERA��ES
S�O BEM SIMPLES, MAS SERAM MELHORES OTIMIZADAS COM A INTRODU��O DE NOVOS RECURSOS DA LINGUAGEM COMO FUN��ES, FILAS, PILHAS, LISTAS ENCADEADAS E ETC.

*/
int main(void){

    int Var1 = 0;
    int Var2 = 0;
    char ope[MAX];

    printf("Informe a operacao desejada:");

    scanf("%c", ope);


    if(ope == "subtracao"){
        scanf("%d%d", &Var1, &Var2);
        printf("O resultado da opera��o �: %d%d", (Var1-Var2));
    }
    else if(ope == "adicao"){
        scanf("%d%d", &Var1, &Var2);
        printf("O resultado da opera��o �: %d%d", (Var1+Var2));
    }
    else if(ope == "multiplicacao"){
        scanf("%d%d", &Var1, &Var2);
        printf("O resultado da opera��o �: %d%d", (Var1*Var2));
    }
    else if(ope == "divisao"){
        scanf("%d%d", &Var1, &Var2);
        printf("O resultado da opera��o �: %d%d", (Var1/Var2));
    }
    else{
       printf("Operacao invalida, tente novamente!");
    }

    return 0;

};
