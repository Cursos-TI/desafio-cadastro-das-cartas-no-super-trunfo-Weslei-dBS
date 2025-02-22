#include <stdio.h>
// primeira carta
int main() {
    int Populacao, NPT; //numero de pontos turísticos(npt)//
    float Area, PIB;
    char Estado;
    char Nome[50];
    char CartaCod[4];

    printf("Digite um Estado('A' a 'H'): \n");
    scanf(" %c", &Estado);

    printf("Digite o código da carta(letra do estado seguida de 01 a 04): \n");
    scanf(" %s", CartaCod);

    printf("Digite o Nome da Cidade: \n");
    scanf(" %s", Nome);

    printf("Digite o número de habitantes: \n");
    scanf(" %d", &Populacao);

    printf("Digite A área em quilômetros quadrados: \n");
    scanf(" %f", &Area);

    printf("Digite o Produto Interno Bruto: \n");
    scanf(" %f", &PIB);

    printf("Digite A quantidade de pontos turísticos: \n");
    scanf(" %d", &NPT);



    printf("Carta 1: \n");
    printf("Estado: %c\nCódigo: %s \n", Estado, CartaCod);
    printf("Nome da cidade: %s\nPopulação: %d\n", Nome, Populacao);
    printf("Área: %.2fkm²\nPIB: %.2f\n", Area, PIB);
    printf("Número de Pontos Turísticos: %d", NPT);

    return 0;
}
