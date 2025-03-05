#include <stdio.h>

int main() {
    char estado1[15];
    char codigo1[4];
    char cidade1[20];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

    char estado2[15];
    char codigo2[4];
    char cidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    printf("Cadastro da Carta 1:\n");

    printf("Estado (ex: SP): ");
    scanf(" %[^\n]", estado1); 
    printf("Codigo (ex: A01): ");
    scanf(" %[^\n]", codigo1); 

    printf("Cidade (ex: Sao Paulo): ");
    scanf(" %[^\n]", cidade1); 

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (km): ");
    scanf("%f", &area1);

    printf("PIB (em reais): ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);

    printf("\nCadastro da Carta 2:\n");

    printf("Estado (ex: RJ): ");
    scanf(" %[^\n]", estado2); 

    printf("Codigo (ex: B02): ");
    scanf(" %[^\n]", codigo2); 

    printf("Cidade (ex: Rio de Janeiro): ");
    scanf(" %[^\n]", cidade2); 

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (km): ");
    scanf("%f", &area2);

    printf("PIB (em reais): ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);

    printf("\nDados da Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km\n", area1);
    printf("PIB: R$ %.2f\n", pib1);
    printf("Pontos turisticos: %d\n", pontos_turisticos1);

    printf("\nDados da Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km\n", area2);
    printf("PIB: R$ %.2f\n", pib2);
    printf("Pontos turisticos: %d\n", pontos_turisticos2);

    return 0;
}