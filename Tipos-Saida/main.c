#include <string.h>
#include <stdio.h>

int main()
{
    int numInt;
    double numDouble; 
    char nome[20]; 
    char sexo;

    numInt = 19;
    numDouble = 1.70;
    strcpy(nome, "Natha Lopes Zerbo");
    sexo = 'M';

    printf("%d\n", numInt);
    printf("%.2lf\n", numDouble);
    printf("%s\n", nome);
    printf("%c\n", sexo);

    printf("Sou %s e tenho %d anos, minha altura eh %.2lf e sou do sexo %c", nome, numInt, numDouble, sexo);

    return 0;
}