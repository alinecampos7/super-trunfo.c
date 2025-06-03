# super-trunfo.c
Implementação básica de um jogo tipo Super Trunfo em linguagem C. Projeto de estudo.
#include <stdio.h>

int main() {
    //Variáveis da Carta 1
    char estado1[20];
    char codigo1[4];
    char nomeCidade1[30];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    //Variáveis da Carta 2
    char estado2[20];
    char codigo2[4];
    char nomeCidade2[30];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    //Dados da Carta 1
    printf("Cadastro da Carta1:\n");

    printf("Estado (que não tenha espaço na sua escrita): ");
    scanf("%s", estado1);

    printf("Código da Carta (01 ou 02): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade (que não tenha espaço na sua escrita): ");
    scanf("%s", nomeCidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área: ", "km²");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turisticos: ");
    scanf("%f", &pontosTuristicos1);

    //Dados da Carta 2
    printf("\nCadastro da Carta 2:\n");

    printf("Estado (que não tenha espaço na sua escrita): ");
    scanf("%s", estado2);

    printf("Código da Carta (01 ou 02): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade (que não tenha espaço na sua escrita): ");
    scanf("%s", nomeCidade2);
    
    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    //Exibição da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    //Exibição da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}