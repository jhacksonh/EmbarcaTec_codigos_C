// inclusôes
#include <math.h>
#include <stdio.h>
/*
    Fazer um programa em "C" que solicite dois números
    e ao final informe para o usuário:
*/
// função principal
int main(){
system("chcp 65001>nul");
    // código
    double num1,num2,soma,produto,quadrado1,raiz,modulo;
    // saida pedindo que digite os números.
    printf("Digite o primeiro Número e o segundo número separado por espaço: ");//exato. vou entrar pelo celular
    //entrada número1 e número2
    scanf("%lf %lf",&num1,&num2);

    // a-> A soma dos números
    soma = num1+num2;
    printf("soma: %.2f\n",soma);

    // b-> O produto do primeiro número pelo quadrado do segundo
    produto = num1*pow(num2,2);
    printf("produto: %.2f\n",produto);
    
    // c-> O quadrado do primeiro número
    quadrado1 = pow(num1,2);
    printf("quadrado do 1º número: %.2f\n",quadrado1);

    // d-> A raiz quadrada da soma dos quadrados
    raiz = sqrt(pow(num1,2)+pow(num2,2));
    printf("Raiz quadrada da soma dos quadrados: %.2f\n",raiz);

    // e-> O módulo do primeiro número
    modulo = fabs(num1);
    printf("Módulo do primeiro número: %d\n",modulo);


    return 0;
}