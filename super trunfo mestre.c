#include <stdio.h>

int main() {
    // Declaração de variáveis para os dados das duas cartas
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[100], cidade2[100];
    unsigned long int populacao1, populacao2; 
    float area1, area2, pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;
    float densidade_populacional1, densidade_populacional2;
    float pib_per_capita1, pib_per_capita2;
    float super_poder1, super_poder2;

    // Entrada dos dados para a primeira carta
    printf("Digite os dados da primeira carta:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1); 

    printf("Código da Carta: ");
    scanf("%s", codigo1); 

    printf("Nome da cidade: ");
    scanf("%s", cidade1); 

    printf("População: ");
    scanf("%lu", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Calculando densidade populacional e PIB per capita 
    densidade_populacional1 = (float)populacao1 / area1;
    pib_per_capita1 = pib1 * 1000000000.0 / populacao1; // PIB convertido em reais

    // Calculando Super Poder
    float inverso_densidade1 = 1 / densidade_populacional1;
    super_poder1 = (float)populacao1 + area1 + (float)pib1 * 1000000000.0 + (float)pontos_turisticos1 + pib_per_capita1 + inverso_densidade1;

    // Entrada dos dados para a segunda carta
    printf("Digite os dados da segunda carta:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2); 

    printf("Código da Carta: ");
    scanf("%s", codigo2); 

    printf("Nome da cidade: ");
    scanf("%s", cidade2); 

    printf("População: ");
    scanf("%lu", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Calculando densidade populacional e PIB per capita 
    densidade_populacional2 = (float)populacao2 / area2;
    pib_per_capita2 = pib2 * 1000000000.0 / populacao2; // PIB convertido em reais

    // Calculando Super Poder
    float inverso_densidade2 = 1 / densidade_populacional2;
    super_poder2 = (float)populacao2 + area2 + (float)pib2 * 1000000000.0 + (float)pontos_turisticos2 + pib_per_capita2 + inverso_densidade2;

    // Exibindo as informações das cartas
    printf("\nInformacoes cadastradas: \n");

    // Carta 1
    printf("\nCarta 1: \n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1); 
    printf("Nome da cidade: %s\n", cidade1); 
    printf("Populacao: %lu\n", populacao1);
    printf("Area em km²: %.2f\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Numero de pontos turisticos: %d\n", pontos_turisticos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per capita: %.2f reais\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", super_poder1);

    // Carta 2
    printf("\nCarta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2); 
    printf("Nome da cidade: %s\n", cidade2); 
    printf("Populacao: %lu\n", populacao2);
    printf("Area em km²: %.2f\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Numero de pontos turisticos: %d\n", pontos_turisticos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per capita: %.2f reais\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);

    // Comparação das cartas
    printf("\nComparação de Cartas:\n");
    
    // População
    printf("População: (%d)\n", populacao1 > populacao2);
    
    // Área
    printf("Área: (%d)\n", area1 > area2);
    
    // PIB
    printf("PIB: (%d)\n", pib1 > pib2);
    
    // Pontos Turísticos
    printf("Pontos Turísticos: (%d)\n", pontos_turisticos1 > pontos_turisticos2);
    
    // Densidade Populacional
    printf("Densidade Populacional: (%d)\n", densidade_populacional1 < densidade_populacional2);
    
    // PIB per Capita
    printf("PIB per Capita: (%d)\n", pib_per_capita1 > pib_per_capita2);
    
    // Super Poder
    printf("Super Poder: (%d)\n", super_poder1 > super_poder2);

    return 0;
}
