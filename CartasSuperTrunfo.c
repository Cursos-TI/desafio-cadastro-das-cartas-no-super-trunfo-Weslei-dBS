#include <stdio.h>

// Váriaveis

int main() {
    int Populacao, Populacao2, NPT, NPT2; // Número de pontos turísticos(npt)
    double Area, Area2, PIB, PIB2, DP, DP2, PIBpC, PIBpC2; // Densidade populacional(DP), PIB per Capita (PIBpC)
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
    scanf(" %lf", &Area);
    scanf(" %lf", &Area2);

    printf("Digite o Produto Interno Bruto em bilhões: \n");
    scanf(" %lf", &PIB);
    scanf(" %lf", &PIB2);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf(" %d", &NPT);
    scanf(" %d", &NPT2);
    printf("\n");

//Cálculos de densidade populacional e PIB per Capita

    DP = (double) Populacao / Area;
    DP2 = (double) Populacao2 / Area2;
    PIBpC = (double) PIB * 1000000000 / Populacao;
    PIBpC2 = (double)PIB2 * 1000000000 / Populacao2;

//Resultado dos input

    printf("Carta 1: \n");
    printf("Estado: %c\nCódigo: %s \n", Estado, CartaCod);
    printf("Nome da cidade: %s\nPopulação: %d\n", Cidade, Populacao);
    printf("Área: %.2lfkm²\nPIB: %.2lf bilhões de reais\n", Area, PIB);
    printf("Número de Pontos Turísticos: %d\n", NPT);
    printf("Densidade Populacional: %.2lf hab/km²\n", DP);
    printf("PIB per Capita: %.2lf reais\n", PIBpC);
    printf("\n");

    printf("Carta 2: \n");
    printf("Estado: %c\nCódigo: %s \n", Estado2, CartaCod2);
    printf("Nome da cidade: %s\nPopulação: %d\n", Cidade2, Populacao2);
    printf("Área: %.2lfkm²\nPIB: %.2lf bilhões de reais\n", Area2, PIB2);
    printf("Número de Pontos Turísticos: %d\n", NPT2);
    printf("Densidade Populacional: %.2lf hab/km²\n", DP2);
    printf("PIB per Capita: %.2lf reais\n", PIBpC2);
    printf("\n");

    return 0;
}
