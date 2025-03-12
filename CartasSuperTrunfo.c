#include <stdio.h>

// Váriaveis
//Legendas: NPT = Número de pontos turísticos, DP = Densidade Populacional, DPI = Densidade Populacional Invertida, PIPpC = PIB per Capita e SP = Super Poder.

int main() {
    unsigned long int Populacao = 12325000, Populacao2 = 6748000;
    int NPT = 50, NPT2 = 30, EscolhaAtributo;
    double Area = 1521.11, Area2 = 1200.25, PIB = 699.28, PIB2 = 300.50, DP, DP2, PIBpC, PIBpC2, SP, SP2, DPI, DPI2;
    char Estado = 'A', Estado2 = 'B';
    char *Cidade = "São Paulo", *Cidade2 = "Rio de Janeiro";
    char *CartaCod = "A01", *CartaCod2 = "B02";

//Cálculos de densidade populacional e PIB per Capita

    DP = (double) Populacao / Area;
    DP2 = (double) Populacao2 / Area2;
    PIBpC = (double) PIB * 1000000000 / Populacao;
    PIBpC2 = (double) PIB2 * 1000000000 / Populacao2;

//Inversão da Densidade Populacional
    DPI = (double) 1.0 / DP;
    DPI2 = (double) 1.0 / DP2;

//Super poder (soma de todos atributos da carta)
    SP =  (double) Populacao + Area + PIB + NPT + DPI + PIBpC;
    SP2 = (double) Populacao2 + Area2 + PIB2 + NPT2 + DPI2 + PIBpC2;

//Menu interativo:

    printf("***Escolha um atributo para comparação!***\n  \n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("\n");
    scanf("%d", &EscolhaAtributo);

 //Lógica do game:

    switch (EscolhaAtributo)
    {
    case 1:
            printf("%s vs %s\n", Cidade, Cidade2);
            printf("O atributo escolhido foi: População!\n");
            printf("%lu vs %lu\n", Populacao, Populacao2);
        if (Populacao > Populacao2){
            printf("***Carta 1 (%s) Venceu!***\n  \n", Cidade);
        } else if (Populacao2 > Populacao)
        {
            printf("***Carta 2 (%s) Venceu!***\n  \n", Cidade2);
        } else
        {
            printf("***Empate!***\n  \n");
        }
        break;
    case 2:
            printf("%s vs %s\n", Cidade, Cidade2);
            printf("O atributo escolhido foi: Área!\n");
            printf("%.2lfkm² vs %.2lfkm²\n", Area, Area2);
        if (Area > Area2){
            printf("***Carta 1 (%s) Venceu!***\n  \n", Cidade);
        } else if (Area2 > Area)
        {
            printf("***Carta 2 (%s) Venceu!***\n  \n", Cidade2);
        } else
        {
            printf("***Empate!***\n  \n");
        }
        break;
    case 3:
            printf("%s vs %s\n", Cidade, Cidade2);
            printf("O atributo escolhido foi: PIB!\n");
            printf("%.2lf bilhões de reais vs %.2lf bilhões de reais\n", PIB, PIB2);
        if (PIB > PIB2){
            printf("***Carta 1 (%s) Venceu!***\n  \n", Cidade);
        } else if (PIB2 > PIB)
        {
            printf("***Carta 2 (%s) Venceu!***\n  \n", Cidade2);
        } else
        {
            printf("***Empate!***\n  \n");
        }
        break;
    case 4:
            printf("%s vs %s\n", Cidade, Cidade2);
            printf("O atributo escolhido foi: Número de pontos túristicos!\n");
            printf("%d vs %d\n", NPT, NPT2);
        if (NPT > NPT2){
            printf("***Carta 1 (%s) Venceu!***\n  \n", Cidade);
        } else if (NPT2 > NPT)
        {
            printf("***Carta 2 (%s) Venceu!***\n  \n", Cidade2);
        } else
        {
            printf("***Empate!***\n  \n");
        }
        break;
    case 5:
            printf("%s vs %s\n", Cidade, Cidade2);
            printf("O atributo escolhido foi: Densidade demográfica!\n");
            printf("%.2lf hab/km² vs %.2lf hab/km²\n", DP, DP2);
        if (DP < DP2){
            printf("***Carta 1 (%s) Venceu!***\n  \n", Cidade);
        } else if (DP2 < DP)
        {
            printf("***Carta 2 (%s) Venceu!***\n  \n", Cidade2);
        } else
        {
            printf("***Empate!***\n  \n");
        }
        break;

    default:
            printf("Escolha inválida.");
        break;
    }


    return 0;
}
