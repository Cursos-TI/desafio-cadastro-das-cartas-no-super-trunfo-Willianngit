#include <stdio.h>

int main() {
    // Declaração de variáveis para os dados das duas cartas
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[100], cidade2[100];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;
    float densidade_populacional1, densidade_populacional2;
    float pib_per_capita1, pib_per_capita2;

    // Entrada dos dados para a primeira carta
    printf("Digite os dados da primeira carta:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1); 

    printf("Código da Carta: ");
    scanf("%s", codigo1); 

    printf("Nome da cidade: ");
    scanf("%s", cidade1); 

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Cálculo de densidade populacional e PIB per capita
    densidade_populacional1 = (float)populacao1 / area1;
    pib_per_capita1 = pib1 * 1000000000.0 / populacao1;

    // Entrada dos dados para a segunda carta
    printf("Digite os dados da segunda carta:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2); 

    printf("Código da Carta: ");
    scanf("%s", codigo2); 

    printf("Nome da cidade: ");
    scanf("%s", cidade2); 

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculo de densidade populacional e PIB per capita
    densidade_populacional2 = (float)populacao2 / area2;
    pib_per_capita2 = pib2 * 1000000000.0 / populacao2;

    // Exibindo as informações das cartas
    printf("\nInformacoes cadastradas: \n");

    // Carta 1
    printf("\nCarta 1: \n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1); 
    printf("Nome da cidade: %s\n", cidade1); 
    printf("Populacao: %d\n", populacao1);
    printf("Area em km²: %.2f\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Numero de pontos turisticos: %d\n", pontos_turisticos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per capita: %.2f reais\n", pib_per_capita1);

    // Carta 2
    printf("\nCarta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2); 
    printf("Nome da cidade: %s\n", cidade2); 
    printf("Populacao: %d\n", populacao2);
    printf("Area em km²: %.2f\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Numero de pontos turisticos: %d\n", pontos_turisticos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per capita: %.2f reais\n", pib_per_capita2);

    return 0;
}
