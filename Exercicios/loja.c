#include <stdio.h>
#include <ctype.h>

int main()
{
    char codigo; 
    float valor, valorTotalCVista = 0, valorTotalCPrazo = 0;
    int qtdeCVista = 0, qtdeCPrazo = 0;

    printf("\n---Digite (V) para compra a vista ou (P) para compra a prazo---\n\n");

    for(int i = 1; i <= 10; i++){
        printf("Compra %d - Digite (V) ou (P): ", i);
        scanf(" %c", &codigo);

        codigo = toupper(codigo);

        switch (codigo){
            case 'V':
                printf("Digite o valor da compra a vista: ");
                scanf("%f", &valor);
                valorTotalCVista += valor;
                qtdeCVista++;
                break;

            case 'P':
                printf("Digite o valor da compra a prazo: ");
                scanf("%f", &valor);
                valorTotalCPrazo += valor;
                qtdeCPrazo++;
                break;

            default:
                printf("Codigo invalido!\n");
                break;
        }
    }

    printf("\n--- RESULTADO FINAL ---\n");
    printf("Compras a Vista: %d Total a vista: R$ %.2f\n", qtdeCVista, valorTotalCVista);
    printf("Compras a Prazo: %d Total a prazo: R$ %.2f\n", qtdeCPrazo, valorTotalCPrazo);
    printf("Valor total das compras: R$ %.2f\n", (valorTotalCVista + valorTotalCPrazo));

    return 0;
}