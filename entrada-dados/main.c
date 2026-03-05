#include <string.h>
#include <stdio.h>

//scanf (Leitura de Dados Básicos, exemplo sem \n)
//fgets (Leitura de Dados com Espaco, exemplo com \n)
//stdin (Entrada Padrão)

int main()
{
    char sexo;
    int idade;
    double altura;
    char nome[50];

    printf("Digite o seu nome:");
    gets(nome);

    printf("Digite o seu Sexo (M|F):");
    scanf("%c", &sexo);

    printf("Digite o valor da Idade:");
    scanf("%d", &idade);

    printf("Digite o valor da Altura:");
    scanf("%lf", &altura);



    printf("Nome: %s\n", nome);
    printf("Sexo: %c\n", sexo);
    printf("Idade: %d\n", idade);
    printf("Altura: %.2lf\n", altura);
    
    return 0;
}