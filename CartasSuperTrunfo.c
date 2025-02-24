#include <stdio.h>

// Váriaveis

int main() {
    int Populacao, Populacao2, NPT, NPT2; //numero de pontos turísticos(npt)//
    float Area, Area2, PIB, PIB2;
    char Estado, Estado2;
    char Cidade[50], Cidade2[50];
    char CartaCod[4], CartaCod2[4];

//Input no Terminal

    printf("Digite dois Estados('A' a 'H'): \n");
    scanf(" %c", &Estado);
    scanf(" %c", &Estado2);
    
    printf("Digite o código das duas cartas(letra do estado seguida de 01 a 04): \n");
    scanf(" %s", CartaCod);
    scanf(" %s", CartaCod2);
    
    printf("Digite o Nome de duas Cidades: \n");
    scanf(" %s", Cidade);
    scanf(" %s", Cidade2);

    printf("Digite os números de habitantes: \n");
    scanf(" %d", &Populacao);
    scanf(" %d", &Populacao2);

    printf("Digite a área em quilômetros quadrados: \n");
    scanf(" %f", &Area);
    scanf(" %f", &Area2);

    printf("Digite o Produto Interno Bruto: \n");
    scanf(" %f", &PIB);
    scanf(" %f", &PIB2);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf(" %d", &NPT);
    scanf(" %d", &NPT2);
    printf("\n"); //Adiciona uma linha em branco entre o input e o resultado.

//Resultado dos input

    printf("Carta 1: \n");
    printf("Estado: %c\nCódigo: %s \n", Estado, CartaCod);
    printf("Nome da cidade: %s\nPopulação: %d\n", Cidade, Populacao);
    printf("Área: %.2fkm²\nPIB: %.2f\n", Area, PIB);
    printf("Número de Pontos Turísticos: %d\n  \n", NPT);

    printf("Carta 2: \n");
    printf("Estado: %c\nCódigo: %s \n", Estado2, CartaCod2);
    printf("Nome da cidade: %s\nPopulação: %d\n", Cidade2, Populacao2);
    printf("Área: %.2fkm²\nPIB: %.2f\n", Area2, PIB2);
    printf("Número de Pontos Turísticos: %d\n", NPT2);
    printf("\n");

    return 0;
}
