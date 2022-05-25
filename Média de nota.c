#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese_Brazil");
    float nota1, nota2, media;
    printf("*Média de 2 notas*\n");
    printf("Escreva sua primeira nota: \n");
    scanf("%f", &nota1);
    printf("Escreva sua segunda nota: \n");
    scanf("%f", &nota2);
    printf("Sua média é %f\n", media = (nota1 + nota2) /2);
    system("pause");
    system("cls");

    
}

