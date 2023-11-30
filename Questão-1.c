#include<stdio.h>

int func(int num1, int num2){
    if(num1<num2){
        return num1+num2;
    } else if(num1==num2){
        return num1*num2;
    } else if(num1>num2){
        return num1-num2;
    }
}

int main(){
    int num1,num2,retu;

    printf("Digite um valor: ");
    scanf("%d",&num1);

    printf("Digite um valor: ");
    scanf("%d",&num2);

    retu = func(num1,num2);
    
    printf("Resultado: %d ",retu);
}