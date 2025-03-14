#include <stdio.h>

int main() {
    // Definindo as variáveis para armazenar os dados das cartas
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2; // Agora população é unsigned long int
    float area1, area2, pib1, pib2;
    int pontos1, pontos2;
    int opcao;

    // Coletando dados da Carta 1
    printf("Insira os dados da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);  // O espaço antes de %c é para consumir o caractere de nova linha.
    printf("Código (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %49[^\n]", cidade1);  // Lê até 49 caracteres, permitindo espaços
    printf("População: ");
    scanf("%lu", &populacao1); // Alterado para ler unsigned long int
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos1);

    // Coletando dados da Carta 2
    printf("\nInsira os dados da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código (ex: A01): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %49[^\n]", cidade2);
    printf("População: ");
    scanf("%lu", &populacao2); // Alterado para ler unsigned long int
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos2);

    // Calculando a Densidade Populacional e PIB per Capita para a Carta 1
    float densidade1 = populacao1 / area1;
    float pibPerCapita1 = pib1 * 1000000000 / populacao1;  // Convertendo PIB para reais (bilhões)

    // Calculando a Densidade Populacional e PIB per Capita para a Carta 2
    float densidade2 = populacao2 / area2;
    float pibPerCapita2 = pib2 * 1000000000 / populacao2;  // Convertendo PIB para reais (bilhões)

    // Menu interativo
    printf("\nEscolha o atributo para comparar as cartas:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("Digite sua opção (1-6): ");
    scanf("%d", &opcao);

    // Comparação com base na opção escolhida
    switch (opcao) {
        case 1:
            printf("\nComparando População:\n");
            if (populacao1 > populacao2) {
                printf("Carta 1 venceu! (População: %lu > %lu)\n", populacao1, populacao2);
            } else if (populacao1 < populacao2) {
                printf("Carta 2 venceu! (População: %lu > %lu)\n", populacao2, populacao1);
            } else {
                printf("Empate! (População: %lu = %lu)\n", populacao1, populacao2);
            }
            break;
        case 2:
            printf("\nComparando Área:\n");
            if (area1 > area2) {
                printf("Carta 1 venceu! (Área: %.2f > %.2f)\n", area1, area2);
            } else if (area1 < area2) {
                printf("Carta 2 venceu! (Área: %.2f > %.2f)\n", area2, area1);
            } else {
                printf("Empate! (Área: %.2f = %.2f)\n", area1, area2);
            }
            break;
        case 3:
            printf("\nComparando PIB:\n");
            if (pib1 > pib2) {
                printf("Carta 1 venceu! (PIB: %.2f > %.2f)\n", pib1, pib2);
            } else if (pib1 < pib2) {
                printf("Carta 2 venceu! (PIB: %.2f > %.2f)\n", pib2, pib1);
            } else {
                printf("Empate! (PIB: %.2f = %.2f)\n", pib1, pib2);
            }
            break;
        case 4:
            printf("\nComparando Pontos Turísticos:\n");
            if (pontos1 > pontos2) {
                printf("Carta 1 venceu! (Pontos Turísticos: %d > %d)\n", pontos1, pontos2);
            } else if (pontos1 < pontos2) {
                printf("Carta 2 venceu! (Pontos Turísticos: %d > %d)\n", pontos2, pontos1);
            } else {
                printf("Empate! (Pontos Turísticos: %d = %d)\n", pontos1, pontos2);
            }
            break;
        case 5:
            printf("\nComparando Densidade Populacional:\n");
            if (densidade1 < densidade2) {
                printf("Carta 1 venceu! (Densidade: %.2f < %.2f)\n", densidade1, densidade2);
            } else if (densidade1 > densidade2) {
                printf("Carta 2 venceu! (Densidade: %.2f < %.2f)\n", densidade2, densidade1);
            } else {
                printf("Empate! (Densidade: %.2f = %.2f)\n", densidade1, densidade2);
            }
            break;
        case 6:
            printf("\nComparando PIB per Capita:\n");
            if (pibPerCapita1 > pibPerCapita2) {
                printf("Carta 1 venceu! (PIB per Capita: %.2f > %.2f)\n", pibPerCapita1, pibPerCapita2);
            } else if (pibPerCapita1 < pibPerCapita2) {
                printf("Carta 2 venceu! (PIB per Capita: %.2f > %.2f)\n", pibPerCapita2, pibPerCapita1);
            } else {
                printf("Empate! (PIB per Capita: %.2f = %.2f)\n", pibPerCapita1, pibPerCapita2);
            }
            break;
        default:
            printf("Opção inválida! Por favor, escolha um número de 1 a 6.\n");
            break;
    }

    return 0;
}