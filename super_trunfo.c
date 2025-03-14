#include <stdio.h>

int main() {
    // Definindo as variáveis para armazenar os dados das cartas
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2; // Agora população é unsigned long int
    float area1, area2, pib1, pib2;
    int pontos1, pontos2;

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

    // Calculando o Super Poder para a Carta 1
    float superPoder1 = (float)(populacao1 + area1 + pib1 * 1000000000 + pontos1 + pibPerCapita1 + (1 / densidade1));
    
    // Calculando o Super Poder para a Carta 2
    float superPoder2 = (float)(populacao2 + area2 + pib2 * 1000000000 + pontos2 + pibPerCapita2 + (1 / densidade2));

    // Exibindo os dados cadastrados
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1); // Exibindo população como unsigned long int
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2); // Exibindo população como unsigned long int
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // Comparação dos Atributos
    printf("\nComparação de Cartas:\n");

    // Comparando População
    printf("População: Carta 1 venceu (%d)\n", (populacao1 > populacao2));
    // Comparando Área
    printf("Área: Carta 1 venceu (%d)\n", (area1 > area2));
    // Comparando PIB
    printf("PIB: Carta 1 venceu (%d)\n", (pib1 > pib2));
    // Comparando Pontos Turísticos
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", (pontos1 > pontos2));
    // Comparando Densidade Populacional (menor densidade vence)
    printf("Densidade Populacional: Carta 2 venceu (%d)\n", (densidade1 > densidade2));
    // Comparando PIB per Capita
    printf("PIB per Capita: Carta 1 venceu (%d)\n", (pibPerCapita1 > pibPerCapita2));
    // Comparando Super Poder
    printf("Super Poder: Carta 1 venceu (%d)\n", (superPoder1 > superPoder2));

    return 0;
}





