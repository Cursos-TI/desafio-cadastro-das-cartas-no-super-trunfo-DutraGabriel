#include <stdio.h>
#include <string.h>

int main() {
    // Declaração das variáveis
    char estado1, estado2;
    char codigo_carta1[4], codigo_carta2[4];
    char nome_cidade1[50], nome_cidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int num_pts_turisticos1, num_pts_turisticos2;
    float densidade_populacional1, densidade_populacional2;
    float pib_per_capita1, pib_per_capita2;
    float super_poder1, super_poder2;
    float densidade_populacional_inversa1, densidade_populacional_inversa2;

    // Leitura dos dados da primeira carta
    printf("Digite os dados da primeira carta:\n");
    printf("Estado: ");
    scanf(" %c", &estado1);
    printf("Código da Carta: ");
    scanf("%s", codigo_carta1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome_cidade1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &num_pts_turisticos1);

    // Cálculos da primeira carta
    densidade_populacional1 = populacao1 / area1;
    densidade_populacional_inversa1 = 1 / densidade_populacional1;
    pib_per_capita1 = (pib1 * 1000000000) / populacao1;
    super_poder1 = (float)populacao1 + area1 + pib1 + num_pts_turisticos1 + pib_per_capita1 + densidade_populacional_inversa1;

    // Leitura dos dados da segunda carta
    printf("\nDigite os dados da segunda carta:\n");
    printf("Estado: ");
    scanf(" %c", &estado2);
    printf("Código da Carta: ");
    scanf("%s", codigo_carta2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome_cidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &num_pts_turisticos2);

    // Cálculos da segunda carta
    densidade_populacional2 = populacao2 / area2;
    densidade_populacional_inversa2 = 1 / densidade_populacional2;
    pib_per_capita2 = (pib2 * 1000000000) / populacao2;
    super_poder2 = (float)populacao2 + area2 + pib2 + num_pts_turisticos2 + pib_per_capita2 + densidade_populacional_inversa2;

    // Exibição dos dados das cartas
    printf("\nDados da Primeira Carta:\n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", codigo_carta1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área (em km²): %.2f\n", area1);
    printf("PIB (em bilhões de reais): %.2f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", num_pts_turisticos1);
    printf("Densidade Populacional (hab/km²): %.2f\n", densidade_populacional1);
    printf("PIB per Capita (em reais): %.2f\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", super_poder1);

    printf("\nDados da Segunda Carta:\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área (em km²): %.2f\n", area2);
    printf("PIB (em bilhões de reais): %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", num_pts_turisticos2);
    printf("Densidade Populacional (hab/km²): %.2f\n", densidade_populacional2);
    printf("PIB per Capita (em reais): %.2f\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);

    // Exibição dos resultados das comparações
    printf("\nComparação de Cartas:\n");

    printf("População: Carta %d venceu (%d)\n",
           (populacao1 > populacao2) ? 1 : 2,
           (populacao1 > populacao2) ? 1 : 0);

    printf("Área: Carta %d venceu (%d)\n",
           (area1 > area2) ? 1 : 2,
           (area1 > area2) ? 1 : 0);

    printf("PIB: Carta %d venceu (%d)\n",
           (pib1 > pib2) ? 1 : 2,
           (pib1 > pib2) ? 1 : 0);

    printf("Pontos Turísticos: Carta %d venceu (%d)\n",
           (num_pts_turisticos1 > num_pts_turisticos2) ? 1 : 2,
           (num_pts_turisticos1 > num_pts_turisticos2) ? 1 : 0);

    printf("Densidade Populacional: Carta %d venceu (%d)\n",
           (densidade_populacional1 < densidade_populacional2) ? 1 : 2,
           (densidade_populacional1 < densidade_populacional2) ? 1 : 0);

    printf("PIB per Capita: Carta %d venceu (%d)\n",
           (pib_per_capita1 > pib_per_capita2) ? 1 : 2,
           (pib_per_capita1 > pib_per_capita2) ? 1 : 0);

    printf("Super Poder: Carta %d venceu (%d)\n",
           (super_poder1 > super_poder2) ? 1 : 2,
           (super_poder1 > super_poder2) ? 1 : 0);

    return 0;
}
