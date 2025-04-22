#include <stdio.h>

int main() {
    // variaveis carta 1
    char estado1[30], codigo1[30], cidade1[30];
    int populacao1, turistico1;
    float area1, pib1, densidade_pop1, pib_perca1, superpoder1;

    // variaveis carta2
    char estado2[30], codigo2[30], cidade2[30];
    int populacao2, turistico2;
    float area2, pib2, densidade_pop2, pib_perca2, superpoder2;

    // Entrada de Dados Carta 1
    printf("Carta 1\n");
    printf("Escolha o Estado (A - H): ");
    scanf("%s", &estado1,"\n");
    printf("Escolha o Código (01 - 04): ");
    scanf("%s", &codigo1,"\n");
    printf("Nome da Cidade: ");
    scanf("%s", &cidade1,"\n");
    printf("População: ");
    scanf("%d",&populacao1,"\n");
    printf("Área (em km²): ");
    scanf("%f", &area1,"\n");
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &turistico1,"\n");
    printf("\n");


    // Entrada de Dados Carta 2
    printf("Carta 2\n");
    printf("Escolha o Estado (A - H): ");
    scanf("%s", &estado2,"\n");
    printf("Escolha o Código (01 - 04): ");
    scanf("%s", &codigo2,"\n");
    printf("Nome da Cidade: ");
    scanf("%s", &cidade2,"\n");
    printf("População: ");
    scanf("%d",&populacao2,"\n");
    printf("Área (em km²): ");
    scanf("%f", &area2,"\n");
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &turistico2,"\n");
    printf("\n");


    // Cálculos Carta 1
    densidade_pop1 = (float)populacao1/area1;
    pib_perca1 = (float) pib1/populacao1;
    superpoder1 = populacao1+area1+pib1+turistico1+pib_perca1+(area1/populacao1);

    // Cálculos Carta 2
    densidade_pop2 = (float) populacao2/area2;
    pib_perca2 = pib2/populacao2;
    superpoder2 = populacao2+area2+pib2+turistico2+pib_perca2+(area2/populacao2);
    

    // Saída Carta 1
    printf("Carta 1\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s%s\n", estado1, codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Quantidade de Pontos Turísticos: %d\n", turistico1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_pop1);
    printf("PIB per Capita: %.2f reais\n", pib_perca1);
    printf("\n");


     // Saída Carta 2
    printf("Carta 2\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s%s\n", estado2, codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Quantidade de Pontos Turísticos: %d\n", turistico2);
    printf("Densidade Populacional: %.2f hab/km² \n", densidade_pop2);
    printf("PIB per Capita: %.2f reais\n", pib_perca2);

    printf("\n");
    /*
    *** Comparação de Cartas ***

    População: Carta 1 venceu (1)
    Área: Carta 1 venceu (1)
    PIB: Carta 1 venceu (1)
    Pontos Turísticos: Carta 1 venceu (1)
    Densidade Populacional: Carta 2 venceu (0)
    PIB per Capita: Carta 1 venceu (1)
    Super Poder: Carta 1 venceu (1)

    
    */

    printf("***Comparação das Cartas***\n");
    printf("População: ");
    if(populacao1>populacao2 == 1) { // Comparando as populações
        printf("Carta 1 Venceu!\n");
    } 
    else { // se a primeira condição não for verdadeira, execute este trecho de código
        printf("Carta 2 Venceu\n");
    }


    printf("Área: ");
    if(area1>area2 == 1) { // Comparando as áreas
        printf("Carta 1 Venceu!\n");
    } 
    else { // se a primeira condição não for verdadeira, execute este trecho de código
        printf("Carta 2 Venceu\n");
    }

    printf("PIB: ");
    if(pib1>pib2 == 1) { // Comparando os PIBS
        printf("Carta 1 Venceu!\n");
    } 
    else { // se a primeira condição não for verdadeira, execute este trecho de código
        printf("Carta 2 Venceu\n");
    }

    printf("Pontos Turísticos: ");
    if(turistico1>turistico2 == 1) { // Comparando os Pontos Turisticos
        printf("Carta 1 Venceu!\n");
    } 
    else { // se a primeira condição não for verdadeira, execute este trecho de código
        printf("Carta 2 Venceu\n");
    }

    printf("Densidade Populacional: ");
    if(densidade_pop1>densidade_pop2 == 0) { // Comparando as densidades populacionais
        printf("Carta 1 Venceu!\n");
    } 
    else { // se a primeira condição não for verdadeira, execute este trecho de código
        printf("Carta 2 Venceu\n");
    }

    printf("PIB per Capita: ");
    if(pib_perca1>pib_perca2 == 1) { // Comparando os PIBS
        printf("Carta 1 Venceu!\n");
    } 
    else { // se a primeira condição não for verdadeira, execute este trecho de código
        printf("Carta 2 Venceu\n");
    }

    printf("Super Poder: ");
    if(superpoder1>superpoder2 == 1) { // Comparando os Super Poderes
        printf("Carta 1 Venceu!\n");
    } 
    else { // se a primeira condição não for verdadeira, execute este trecho de código
        printf("Carta 2 Venceu\n");
    }







    return 0;


}
