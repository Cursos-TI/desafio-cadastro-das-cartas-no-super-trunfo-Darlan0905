#include <stdio.h>

int main() {
    // variaveis carta 1
    char estado1[10], codigo1[10], cidade1[50];
    int populacao1, turistico1;
    float area1, pib1;

    // variaveis carta2
    char estado2[10], codigo2[10], cidade2[50];
    int populacao2, turistico2;
    float area2, pib2;

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
    

    // Saída Carta 1
    printf("Carta 1\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s%s\n", estado1, codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Area M^2: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Quantidade de Pontos Turísticos: %d\n", turistico1);
    printf("\n");


     // Saída Carta 2
     printf("Carta 2\n");
     printf("Estado: %s\n", estado2);
     printf("Codigo: %s%s\n", estado2, codigo2);
     printf("Nome da Cidade: %s\n", cidade2);
     printf("População: %d\n", populacao2);
     printf("Area M^2: %.2f\n", area2);
     printf("PIB: %.2f\n", pib2);
     printf("Quantidade de Pontos Turísticos: %d\n", turistico2);
 


    return 0;


}
