#include <stdio.h>
#include <string.h>

int main() {
    char estado1, estado2; // variável para armazenar uma letra de 'A' a 'H'
    char codigo_carta1[4], codigo_carta2[4]; // agora comporta 3 caracteres + '\0'
    char nome_cidade1[50], nome_cidade2[50]; // variável para armazenar o nome da cidade
    int populacao1, populacao2; // variável para armazenar a população da cidade
    float area1, area2; // variável para armazenar a área da cidade
    float pib1, pib2; // variável para armazenar o PIB da cidade
    int num_pts_turisticos1, num_pts_turisticos2; // variável para armazenar o número de pontos turísticos da cidade

    printf("Digite o estado da primeira carta (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o código da primeira carta (ex: B01): ");
    scanf("%3s", codigo_carta1);
    printf("Digite o nome da cidade da primeira carta: ");
    getchar(); // Limpa o '\n' do buffer
    fgets(nome_cidade1, sizeof(nome_cidade1), stdin);
    nome_cidade1[strcspn(nome_cidade1, "\n")] = 0; // Remove o '\n' do final
    printf("Digite a população da primeira carta: ");
    scanf("%d", &populacao1);
    printf("Digite a área da primeira carta: ");
    scanf("%f", &area1);
    printf("Digite o PIB da primeira carta: ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos da primeira carta: ");
    scanf("%d", &num_pts_turisticos1);

    printf("Digite o estado da segunda carta (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o código da segunda carta (ex: B01): ");
    scanf("%3s", codigo_carta2);
    printf("Digite o nome da cidade da segunda carta: ");
    getchar(); // Limpa o '\n' do buffer
    fgets(nome_cidade2, sizeof(nome_cidade2), stdin);
    nome_cidade2[strcspn(nome_cidade2, "\n")] = 0; // Remove o '\n' do final
    printf("Digite a população da segunda carta: ");
    scanf("%d", &populacao2);
    printf("Digite a área da segunda carta: ");
    scanf("%f", &area2);
    printf("Digite o PIB da segunda carta: ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos da segunda carta: ");
    scanf("%d", &num_pts_turisticos2);

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo_carta1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", num_pts_turisticos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", num_pts_turisticos2);

    return 0;
}