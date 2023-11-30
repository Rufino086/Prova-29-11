#include <stdio.h>

int fatorial(int numeros){
    int result1=0;
    int i=1;

    for(i=1;i<numeros;i++){
        result1=i*numeros;
    }
    return result1;
}

int main(){
    int numeros,resultado;
    printf("Digite um numero para fazer fatorial: ");
    scanf("%d",&numeros);

    resultado = fatorial(numeros);
    printf("O fatorial do num eh: %d", resultado);
}