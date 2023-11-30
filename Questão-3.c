#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int tamanhomedio(int cont1,int cont2){
    return cont1+cont2/2;
}

int main(){
    char nome[20],email[20];
    int cont1=0,cont2=0,result;

    printf("Digite seu primeiro nome: ");
    gets(nome);

    printf("Digite seu segundo nome : ");
    gets(email);

   for(int i=0;i<strlen(nome);i++){
    if(nome[i] != '\0' || nome[i] != ' '){
    cont1++;
    }
   }

   for(int i=0;i<strlen(email);i++){
    if(nome[i] != '\0' || nome[i] != ' '){
    cont2++;
    }
   }

   result = tamanhomedio(cont1,cont2);
   printf("A média das strings são: %d",result);
}