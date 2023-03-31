#include<stdio.h>
#include<stdlib.h>
int main(void){
    int soma=0, valor=0;
    do{
        system("cls");
        printf("\n Digite um valor diferente de 0: ");
        scanf("%d", &valor);
        if(valor%2==0){
            soma+=valor;
        }
    }while(valor!=0);
    printf("\n A soma dos números pares é: %d", soma);
}