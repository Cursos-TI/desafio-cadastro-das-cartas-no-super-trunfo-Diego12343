#include <stdio.h>

int main() {
    // Definindo as variáveis para armazenar os dados das cartas
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2; // Agora população é unsigned long int
    float area1, area2, pib1, pib2;
    int pontos1, pontos2;
    int opcao1, opcao2;

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

    // Menu interativo para a escolha do primeiro atributo
    printf("\nEscolha o primeiro atributo para comparar as cartas:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("Digite sua opção (1-6): ");
    scanf("%d", &opcao1);

    // Menu interativo para a escolha do segundo atributo
    printf("\nEscolha o segundo atributo para comparar as cartas:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("Digite sua opção (1-6): ");
    scanf("%d", &opcao2);

    // Garantir que os dois atributos sejam diferentes
    if (opcao1 == opcao2) {
        printf("Você não pode escolher o mesmo atributo duas vezes. Tente novamente.\n");
        return 1;
    }

    // Função para comparar os atributos
    int comparar(int op, float val1, float val2) {
        if (op == 5) {  // Densidade Populacional tem regra invertida
            return val1 < val2 ? 1 : (val1 > val2 ? 2 : 0);
        } else {
            return val1 > val2 ? 1 : (val1 < val2 ? 2 : 0);
        }
    }

    // Comparação do primeiro atributo
    int resultado1 = 0;
    switch (opcao1) {
        case 1: resultado1 = comparar(opcao1, populacao1, populacao2); break;
        case 2: resultado1 = comparar(opcao1, area1, area2); break;
        case 3: resultado1 = comparar(opcao1, pib1, pib2); break;
        case 4: resultado1 = comparar(opcao1, pontos1, pontos2); break;
        case 5: resultado1 = comparar(opcao1, densidade1, densidade2); break;
        case 6: resultado1 = comparar(opcao1, pibPerCapita1, pibPerCapita2); break;
    }

    // Comparação do segundo atributo
    int resultado2 = 0;
    switch (opcao2) {
        case 1: resultado2 = comparar(opcao2, populacao1, populacao2); break;
        case 2: resultado2 = comparar(opcao2, area1, area2); break;
        case 3: resultado2 = comparar(opcao2, pib1, pib2); break;
        case 4: resultado2 = comparar(opcao2, pontos1, pontos2); break;
        case 5: resultado2 = comparar(opcao2, densidade1, densidade2); break;
        case 6: resultado2 = comparar(opcao2, pibPerCapita1, pibPerCapita2); break;
    }

    // Exibição dos resultados de cada atributo
    printf("\nComparando o primeiro atributo:\n");
    printf("Carta 1: ");
    switch (opcao1) {
        case 1: printf("População: %lu", populacao1); break;
        case 2: printf("Área: %.2f", area1); break;
        case 3: printf("PIB: %.2f", pib1); break;
        case 4: printf("Pontos Turísticos: %d", pontos1); break;
        case 5: printf("Densidade Populacional: %.2f", densidade1); break;
        case 6: printf("PIB per Capita: %.2f", pibPerCapita1); break;
    }
    printf("\nCarta 2: ");
    switch (opcao1) {
        case 1: printf("População: %lu", populacao2); break;
        case 2: printf("Área: %.2f", area2); break;
        case 3: printf("PIB: %.2f", pib2); break;
        case 4: printf("Pontos Turísticos: %d", pontos2); break;
        case 5: printf("Densidade Populacional: %.2f", densidade2); break;
        case 6: printf("PIB per Capita: %.2f", pibPerCapita2); break;
    }
    printf("\nResultado: Carta %d venceu!\n", resultado1);

    printf("\nComparando o segundo atributo:\n");
    printf("Carta 1: ");
    switch (opcao2) {
        case 1: printf("População: %lu", populacao1); break;
        case 2: printf("Área: %.2f", area1); break;
        case 3: printf("PIB: %.2f", pib1); break;
        case 4: printf("Pontos Turísticos: %d", pontos1); break;
        case 5: printf("Densidade Populacional: %.2f", densidade1); break;
        case 6: printf("PIB per Capita: %.2f", pibPerCapita1); break;
    }
    printf("\nCarta 2: ");
    switch (opcao2) {
        case 1: printf("População: %lu", populacao2); break;
        case 2: printf("Área: %.2f", area2); break;
        case 3: printf("PIB: %.2f", pib2); break;
        case 4: printf("Pontos Turísticos: %d", pontos2); break;
        case 5: printf("Densidade Populacional: %.2f", densidade2); break;
        case 6: printf("PIB per Capita: %.2f", pibPerCapita2); break;
    }
    printf("\nResultado: Carta %d venceu!\n", resultado2);

    // Soma dos atributos
    float somaCarta1 = 0, somaCarta2 = 0;
    if (opcao1 == 1) somaCarta1 += populacao1;
    if (opcao2 == 1) somaCarta2 += populacao2;
    if (opcao1 == 2) somaCarta1 += area1;
    if (opcao2 == 2) somaCarta2 += area2;
    if (opcao1 == 3) somaCarta1 += pib1;
    if (opcao2 == 3) somaCarta2 += pib2;
    if (opcao1 == 4) somaCarta1 += pontos1;
    if (opcao2 == 4) somaCarta2 += pontos2;
    if (opcao1 == 5) somaCarta1 += densidade1;
    if (opcao2 == 5) somaCarta2 += densidade2;
    if (opcao1 == 6) somaCarta1 += pibPerCapita1;
    if (opcao2 == 6) somaCarta2 += pibPerCapita2;

    // Comparação final das somas
    printf("\nSoma dos Atributos:\n");
    printf("Carta 1: %.2f\n", somaCarta1);
    printf("Carta 2: %.2f\n", somaCarta2);

    if (somaCarta1 > somaCarta2)
        printf("Carta 1 venceu a rodada!\n");
    else if (somaCarta1 < somaCarta2)
        printf("Carta 2 venceu a rodada!\n");
    else
        printf("Empate na rodada!\n");

    return 0;
}
