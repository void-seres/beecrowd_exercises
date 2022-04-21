#include <stdio.h>

int VerificaC(int *v);
int VerificaD(int *v);

int main() {
    int i, v[5];

    for(i = 0; i < 5; i++)
        scanf("%d%*c", &v[i]);

    // verifies if the array is crescent and, if true, prints "C"
    // verifica se o vetor é crescente e, se verdadeiro, imprime "C"
    if(VerificaC(v))
        printf("C\n");
    
    // verifies if array is decrescent
    // verifica se o vetor é decrescente
    else if(VerificaD(v))
        printf("D\n");

    else
        printf("N\n");

    return 0;
}

int VerificaC(int *v) {
    int i, flag;

    for(i = 0; i < 4; i++) {
        // verifies if the current element is less than or equal to the next element and, if true, defines flag as 1
        // verifica se o elemento atual é menor ou igual ao próximo e, se verdadeiro, define a flag como 1
        if (v[i] <= v[i + 1])
            flag = 1;
        
        // if the next element is bigger than the current one, define flags as 0 and stops the function
        // se o próximo elemento for maior que o atual, define a flag como 0 e para a função
        else {
            flag = 0;
            break;
        }
    }

    return flag;
}

int VerificaD(int *v) {
    int i, flag;

    for(i = 0; i < 4; i++) {
        if (v[i] >= v[i + 1])
            flag = 1;

        else {
            flag = 0;
            break;
        }
    }
    
    return flag;
}
