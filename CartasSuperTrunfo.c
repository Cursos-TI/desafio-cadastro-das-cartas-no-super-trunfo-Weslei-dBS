#include <stdio.h>

// Váriaveis
//Legendas: NPT = Número de pontos turísticos, DP = Densidade Populacional, DPI = Densidade Populacional Invertida, PIPpC = PIB per Capita e SP = Super Poder.

int main() {
    unsigned long int Populacao = 12325000, Populacao2 = 6748000;
    int NPT = 50, NPT2 = 30, PrimeiroAtributo, SegundoAtributo, Resultado1, Resultado2;
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

    printf("***Escolha o primeiro atributo!***\n  \n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("\n");
    scanf("%d", &PrimeiroAtributo);

 //Lógica do game (Primeiro Atributo):

    switch (PrimeiroAtributo)
    {
    case 1:
            printf("%s vs %s\n", Cidade, Cidade2);
            printf("O atributo escolhido foi: População!\n");
            printf("%lu vs %lu\n", Populacao, Populacao2);
            Resultado1 = Populacao > Populacao2 ? 1 : 0;
        break;
    case 2:
            printf("%s vs %s\n", Cidade, Cidade2);
            printf("O atributo escolhido foi: Área!\n");
            printf("%.2lfkm² vs %.2lfkm²\n", Area, Area2);
            Resultado1 = Area > Area2 ? 1 : 0;
        break;
    case 3:
            printf("%s vs %s\n", Cidade, Cidade2);
            printf("O atributo escolhido foi: PIB!\n");
            printf("%.2lf bilhões de reais vs %.2lf bilhões de reais\n", PIB, PIB2);
            Resultado1 = PIB > PIB2 ? 1 : 0;
        break;
    case 4:
            printf("%s vs %s\n", Cidade, Cidade2);
            printf("O atributo escolhido foi: Número de pontos túristicos!\n");
            printf("%d vs %d\n", NPT, NPT2);
            Resultado1 = NPT > NPT2 ? 1 : 0;
        break;
    case 5:
            printf("%s vs %s\n", Cidade, Cidade2);
            printf("O atributo escolhido foi: Densidade demográfica!\n");
            printf("%.2lf hab/km² vs %.2lf hab/km²\n", DP, DP2);
            Resultado1 = DP2 > DP2 ? 1 : 0;
        break;
    default:
            printf("Escolha inválida.");
        break;
    }

//Segundo Menu

    printf("***Escolha o segundo atributo!***\n  \n");
    printf("Atenção o segundo atributo não pode ser igual ao primeiro!!!\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("\n");
    scanf("%d", &SegundoAtributo);

//Lógica do Segundo atributo

    if (PrimeiroAtributo == SegundoAtributo)
    {
        printf("Você escolheu o mesmo atributo!");
    } else
    {
        switch (SegundoAtributo)
    {
    case 1:
            printf("%s vs %s\n", Cidade, Cidade2);
            printf("O atributo escolhido foi: População!\n");
            printf("%lu vs %lu\n", Populacao, Populacao2);
            Resultado2 = Populacao > Populacao2 ? 1 : 0;
        break;
    case 2:
            printf("%s vs %s\n", Cidade, Cidade2);
            printf("O atributo escolhido foi: Área!\n");
            printf("%.2lfkm² vs %.2lfkm²\n", Area, Area2);
            Resultado2 = Area > Area2 ? 1 : 0;
        break;
    case 3:
            printf("%s vs %s\n", Cidade, Cidade2);
            printf("O atributo escolhido foi: PIB!\n");
            printf("%.2lf bilhões de reais vs %.2lf bilhões de reais\n", PIB, PIB2);
            Resultado2 = PIB > PIB2 ? 1 : 0;
        break;
    case 4:
            printf("%s vs %s\n", Cidade, Cidade2);
            printf("O atributo escolhido foi: Número de pontos túristicos!\n");
            printf("%d vs %d\n", NPT, NPT2);
            Resultado2 = NPT > NPT2 ? 1 : 0;
        break;
    case 5:
            printf("%s vs %s\n", Cidade, Cidade2);
            printf("O atributo escolhido foi: Densidade demográfica!\n");
            printf("%.2lf hab/km² vs %.2lf hab/km²\n", DP, DP2);
            Resultado2 = DP < DP2 ? 1 : 0;
        break;
    default:
            printf("Escolha inválida.");
        break;
    }
    }

    if (Resultado1 && Resultado2)
    {
        printf("Parabéns você venceu!!!\n  \n");
    } else if (Resultado1 != Resultado2)
    {
        printf("Você empatou!!!\n  \n");
    } else {
        printf("Infelizmente, você perdeu!\n  \n");
    }
    
    
    


    return 0;

}


