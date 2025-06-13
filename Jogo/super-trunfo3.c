/*
 * Super Trunfo: Batalha de Cartas - Nível Mestre
 * Comparação de atributos entre duas cartas com cálculo de Super Poder
 */

#include <stdio.h>
#include <string.h>

struct Carta {
    char estado[50];
    char nome[50];
    unsigned long int populacao;
    int area;
    int pib; // em milhões
    int pontos_turisticos;
    float densidade;
    float pib_per_capita;
    float super_poder;
};

void lerCarta(struct Carta *carta) {
    printf("\nDigite o estado: ");
    scanf(" %[^\n]", carta->estado);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", carta->nome);

    printf("Digite a população: ");
    scanf("%lu", &carta->populacao);

    printf("Digite a área (em km²): ");
    scanf("%d", &carta->area);

    printf("Digite o PIB (em milhões): ");
    scanf("%d", &carta->pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta->pontos_turisticos);

    // Cálculo da densidade (evitar divisão por zero)
    if (carta->area > 0) {
        carta->densidade = (float)carta->populacao / carta->area;
    } else {
        carta->densidade = 0;
    }

    // Cálculo do PIB per capita
    if (carta->populacao > 0) {
        carta->pib_per_capita = (float)(carta->pib * 1000000) / carta->populacao;
    } else {
        carta->pib_per_capita = 0;
    }

    // Cálculo do super poder
    float inverso_densidade = (carta->densidade > 0) ? (1.0 / carta->densidade) : 0;
    carta->super_poder =
        (float)carta->populacao +
        (float)carta->area +
        (float)(carta->pib * 1000000) + // PIB convertido para unidade comparável
        (float)carta->pontos_turisticos +
        carta->pib_per_capita +
        inverso_densidade;
}

int compararMaior(float a, float b) {
    return a > b ? 1 : 0;
}

int compararMenor(float a, float b) {
    return a < b ? 1 : 0;
}

void compararCartas(struct Carta c1, struct Carta c2) {
    printf("\n--- Comparação de Cartas ---\n\n");

    printf("População: Carta 1 venceu (%d)\n", compararMaior(c1.populacao, c2.populacao));
    printf("Área: Carta 1 venceu (%d)\n", compararMaior(c1.area, c2.area));
    printf("PIB: Carta 1 venceu (%d)\n", compararMaior(c1.pib, c2.pib));
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", compararMaior(c1.pontos_turisticos, c2.pontos_turisticos));
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", compararMenor(c1.densidade, c2.densidade));
    printf("PIB per Capita: Carta 1 venceu (%d)\n", compararMaior(c1.pib_per_capita, c2.pib_per_capita));
    printf("Super Poder: Carta 1 venceu (%d)\n", compararMaior(c1.super_poder, c2.super_poder));
}

int main() {
    struct Carta carta1, carta2;

    printf("=== Cadastro da Carta 1 ===\n");
    lerCarta(&carta1);

    printf("\n=== Cadastro da Carta 2 ===\n");
    lerCarta(&carta2);

    compararCartas(carta1, carta2);

    return 0;
}
