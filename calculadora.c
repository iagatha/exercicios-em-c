#include<stdio.h>
int maain(void){
    float x=0,y=0, resultado=0;
    int op=0;
    do{
        printf("\n t1 - Soma\n\t2 - subtracao\n\t3 - multiplicacao\nt4 - divisao");
        scan("%d", &op);
        printf("\nDigite o primeiro numero: ");
        scanf("%f", &x);
        printf("\nDigite o segundo numero: ");
        scanf("%f", &y);
        switch(op){
            case 1:
                resultado = x+y;
                break;
            case 2:
                resultado = x-y;
                break;
            case 3:
                resultado = x*y;
                break;
            case 4:
                resultado = x/y;
                break;
            default:
                printf("\nDigite uma opcao valida\n");
                break;
        }
        printf("\nt O resultado e: %0.2f", resultado);
        printf("\nDigite 1 para continuar: ");
        scanf("%i", &op);
    }while(op==1);
}