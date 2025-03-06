#include <stdio.h>

// Váriaveis
//Legendas: NPT = Número de pontos turísticos, DP = Densidade Populacional, DPI = Densidade Populacional Invertida, PIPpC = PIB per Capita e SP = Super Poder.

int main() {
    unsigned long int Populacao, Populacao2;
    int NPT, NPT2, Resultado1, Resultado2, Resultado3, Resultado4, Resultado5, Resultado6, Resultado7;
    double Area, Area2, PIB, PIB2, DP, DP2, PIBpC, PIBpC2, SP, SP2, DPI, DPI2;
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
    scanf(" %lu", &Populacao);
    scanf(" %lu", &Populacao2);

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

//Inversão da Densidade Populacional
    DPI = (double) 1.0 / DP;
    DPI2 = (double) 1.0 / DP2;

//Super poder (soma de todos atributos da carta)
    SP =  (double) Populacao + Area + PIB + NPT + DPI + PIBpC;
    SP2 = (double) Populacao2 + Area2 + PIB2 + NPT2 + DPI2 + PIBpC2;

//Cartas

    printf("Carta 1: \n");
    printf("Estado: %c\nCódigo: %s \n", Estado, CartaCod);
    printf("Nome da cidade: %s\nPopulação: %lu\n", Cidade, Populacao);
    printf("Área: %.2lfkm²\nPIB: %.2lf bilhões de reais\n", Area, PIB);
    printf("Número de Pontos Turísticos: %d\n", NPT);
    printf("Densidade Populacional: %.2lf hab/km²\n", DP);
    printf("PIB per Capita: %.2lf reais\n", PIBpC);
    printf("Super Poder: %.2lf\n", SP);
    printf("\n");

    printf("Carta 2: \n");
    printf("Estado: %c\nCódigo: %s \n", Estado2, CartaCod2);
    printf("Nome da cidade: %s\nPopulação: %lu\n", Cidade2, Populacao2);
    printf("Área: %.2lfkm²\nPIB: %.2lf bilhões de reais\n", Area2, PIB2);
    printf("Número de Pontos Turísticos: %d\n", NPT2);
    printf("Densidade Populacional: %.2lf hab/km²\n", DP2);
    printf("PIB per Capita: %.2lf reais\n", PIBpC2);
    printf("Super Poder: %.2lf\n", SP2);
    printf("\n");

//Comparação de Cartas:
    
    printf("Carta 1 - %s: %.2lfkm²\n", Cidade, Area);
    printf("Carta 2 - %s: %.2lfkm²\n", Cidade2, Area2);
    if (Area > Area2){
        printf("Resultado: Carta 1(%s) Venceu!", Cidade);
    } else{
        printf("Resultado: Carta 2(%s) Venceu!", Cidade2);
    }
    printf("\n");

    return 0;
}
