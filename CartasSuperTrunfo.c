#include <stdio.h>
#include <string.h>

int main() {
    char estado1, estado2;
    char codigo_carta1[4], codigo_carta2[4];
    char nome_cidade1[50], nome_cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int num_pts_turisticos1, num_pts_turisticos2;
    float densidade_populacional1, densidade_populacional2;
    float pib_per_capita1, pib_per_capita2;

    // Leitura dos dados da primeira carta
    printf("Digite os dados da primeira carta:\n");
    printf("Estado: ");
    scanf(" %c", &estado1);
    printf("Código da Carta: ");
    scanf("%s", codigo_carta1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome_cidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &num_pts_turisticos1);

    densidade_populacional1 = populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000) / populacao1;

    // Leitura dos dados da segunda carta
    printf("Digite os dados da segunda carta:\n");
    printf("Estado: ");
    scanf(" %c", &estado2);
    printf("Código da Carta: ");
    scanf("%s", codigo_carta2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome_cidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &num_pts_turisticos2);

    densidade_populacional2 = populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000) / populacao2;

    printf("*** Carta 1 ***\n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", codigo_carta1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", num_pts_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);

    printf("*** Carta 2 ***\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", num_pts_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);

    return 0;
}