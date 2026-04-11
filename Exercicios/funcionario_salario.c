#include <stdio.h>

int main() {
    int codigo;
    float salario, aumento, novoSalario;
    char cargo[20];

    printf("Digite o codigo do cargo (1 a 5): ");
    scanf("%d", &codigo);
    printf("Digite o salario atual: R$ ");
    scanf("%f", &salario);
    
    switch (codigo) {
        case 1:
            sprintf(cargo, "Escrituario");
            aumento = salario * 0.50; 
            break;
        case 2:
            sprintf(cargo, "Secretario");
            aumento = salario * 0.35;
            break;
        case 3:
            sprintf(cargo, "Caixa");
            aumento = salario * 0.20;
            break;
        case 4:
            sprintf(cargo, "Gerente");
            aumento = salario * 0.10;
            break;
        case 5:
            sprintf(cargo, "Diretor");
            aumento = 0; 
            break;
        default:
            printf("Codigo invalido!\n");
            return 1;
    }

    novoSalario = salario + aumento;

    printf("\nCargo: %s\n", cargo);
    printf("Valor do aumento: R$ %.2f\n", aumento);
    printf("Novo salario: R$ %.2f\n", novoSalario);

    return 0;
}
