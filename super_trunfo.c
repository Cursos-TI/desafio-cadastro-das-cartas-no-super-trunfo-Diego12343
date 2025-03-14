#include <stdio.h>

struct Carta {
    char estado;
    int codigo;
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
};

int main() {
    struct Carta carta1, carta2;

    // Cadastro da primeira carta
    printf("Cadastro da primeira carta:\n");
    printf("Estado (Exemplo: A): ");
    scanf(" %c", &carta1.estado);  // O espaço antes de %c é para consumir o '\n' restante no buffer
    printf("Código (Exemplo: 01): ");
    scanf("%d", &carta1.codigo);
    printf("Nome da Cidade: ");
    scanf(" %49[^\n]", carta1.cidade);  // Lê a cidade com espaços
    printf("População: ");
    scanf("%d", &carta1.populacao);
    printf("Área (em km²): ");
    scanf("%f", &carta1.area);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &carta1.pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    // Calcular Densidade Populacional e PIB per Capita para a primeira carta
    carta1.densidadePopulacional = carta1.populacao / carta1.area;
    carta1.pibPerCapita = carta1.pib * 1000000000 / carta1.populacao;  // Convertendo PIB para reais

    // Cadastro da segunda carta
    printf("\nCadastro da segunda carta:\n");
    printf("Estado (Exemplo: B): ");
    scanf(" %c", &carta2.estado);
    printf("Código (Exemplo: 02): ");
    scanf("%d", &carta2.codigo);
    printf("Nome da Cidade: ");
    scanf(" %49[^\n]", carta2.cidade);
    printf("População: ");
    scanf("%d", &carta2.populacao);
    printf("Área (em km²): ");
    scanf("%f", &carta2.area);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &carta2.pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // Calcular Densidade Populacional e PIB per Capita para a segunda carta
    carta2.densidadePopulacional = carta2.populacao / carta2.area;
    carta2.pibPerCapita = carta2.pib * 1000000000 / carta2.populacao;  // Convertendo PIB para reais

    // Exibição dos resultados
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %c%02d\n", carta1.estado, carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.cidade);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões de reais\n", carta1.pib);
    printf("Número de Pontos Turísticos: %d\n", carta1.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta1.densidadePopulacional);
    printf("PIB per Capita: %.2f reais\n", carta1.pibPerCapita);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %c%02d\n", carta2.estado, carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.cidade);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões de reais\n", carta2.pib);
    printf("Número de Pontos Turísticos: %d\n", carta2.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta2.densidadePopulacional);
    printf("PIB per Capita: %.2f reais\n", carta2.pibPerCapita);

    return 0;
}

