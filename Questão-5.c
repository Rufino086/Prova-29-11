#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void ehouneh(char string[]){
    char str2[25];
    int j=0,i=0,qtd;

    qtd = strlen(string);

    for(i=qtd;i<=0;i--){
        str2[i] = string[j]; 
        j++;
    }

    for(i=0;i<strlen(str2);i++){
        for(j=0;j<stlen(str2);j++){
        str2[i] == string[j];
        }
	}


}

int main(){
    char string[25];

    printf("Digite uma palavra: ");
    gets(string);

    ehouneh(string);
}