void testar(int n1, int n2){
    n1 = -1;
    n2 = -2;
    printf("\nValores dentro da função testar(): ");
    printf("nn1 = %d e n2 = %d", n1, n2);
    //n1 = -1 e n2 = -2

}

int main(){
    int n1 = 10;
    int n2 = 20;
    printf("\nValores antes de chamar a função testar(): ");
    printf("\nn1 = %d e n2 = %d", n1, n2");
    //n1 = 10 e n2 = 20

    testar(n1, n2); // nesse momento é criada uma copia de cada váriavel na memoria para utilização da função
    //dentro da função o valor das variaveis é alterado e impresso, mas essa alteração é local
    // feita uma copia doa valores na memoria e não afetará o valor inicial das variaveis criadas na função principal

    printf("\nValores depois de chamar a função testar(): ");
    printf("\nn1 = %d e n2 = %d", n1, n2");
    //n1 = 10 e n2 = 20
}