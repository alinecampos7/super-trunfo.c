#include <stdio.h>

int main() {
    // Variáveis da Carta 1
    char estado1[20];
    char codigo1[4];
    char nomeCidade1[30];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;

    // Variáveis da Carta 2
    char estado2[20];
    char codigo2[4];
    char nomeCidade2[30];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;

    // Cadastro da Carta 1
    printf("Cadastro da Carta 1:\n");

    printf("Estado (sem espaços): ");
    scanf("%s", estado1);

    printf("Código da Carta (01 ou 02): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade (sem espaços): ");
    scanf("%s", nomeCidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em reais): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculo dos indicadores da Carta 1
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;

    // Cadastro da Carta 2
    printf("\nCadastro da Carta 2:\n");

    printf("Estado (sem espaços): ");
    scanf("%s", estado2);

    printf("Código da Carta (01 ou 02): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade (sem espaços): ");
    scanf("%s", nomeCidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em reais): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculo dos indicadores da Carta 2
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    // Exibição das Cartas
    printf("\n--- CARTA 1 ---\n");
    printf("Cidade: %s (%s)\n", nomeCidade1, estado1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f R$\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per capita: %.2f R$\n", pibPerCapita1);

    printf("\n--- CARTA 2 ---\n");
    printf("Cidade: %s (%s)\n", nomeCidade2, estado2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f R$\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per capita: %.2f R$\n", pibPerCapita2);

    // Comparação - Escolha o atributo para comparar abaixo:
    // Opções: populacao, area, pib, densidade, pibPerCapita
    // Exemplo: Vamos comparar o PIB per capita

    printf("\n--- COMPARAÇÃO DE CARTAS (Atributo: PIB per capita) ---\n");

    if (pibPerCapita1 > pibPerCapita2) {
        printf("Carta 1 - %s: %.2f R$\n", nomeCidade1, pibPerCapita1);
        printf("Carta 2 - %s: %.2f R$\n", nomeCidade2, pibPerCapita2);
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (pibPerCapita2 > pibPerCapita1) {
        printf("Carta 1 - %s: %.2f R$\n", nomeCidade1, pibPerCapita1);
        printf("Carta 2 - %s: %.2f R$\n", nomeCidade2, pibPerCapita2);
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("Carta 1 - %s: %.2f R$\n", nomeCidade1, pibPerCapita1);
        printf("Carta 2 - %s: %.2f R$\n", nomeCidade2, pibPerCapita2);
        printf("Resultado: Empate!\n");
    }

    return 0;
}