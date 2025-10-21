#include <stdio.h>

#define NUM_CARTAS 4

// Estrutura que representa uma carta
struct Carta {
    char estado[3];  // Alterado para string (permite "BA", "RJ", etc.)
    char codigo[5];
    char nome_cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
};

int main() {
    struct Carta cartas[NUM_CARTAS];

    // Cadastro das cartas
    for (int i = 0; i < NUM_CARTAS; i++) {
        printf("\n=== Cadastro da Carta %d ===\n", i + 1);

        printf("Digite o Estado (ex: BA, RJ): ");
        scanf(" %2s", cartas[i].estado); // lê até 2 caracteres, ignorando espaços/enters

        printf("Digite o código da carta (ex: A01): ");
        scanf(" %4s", cartas[i].codigo);

        printf("Digite o nome da cidade: ");
        scanf(" %[^\n]", cartas[i].nome_cidade); // lê nome com espaços

        printf("Digite a população: ");
        scanf("%d", &cartas[i].populacao);

        printf("Digite a área em km²: ");
        scanf("%f", &cartas[i].area);

        printf("Digite o PIB (em bilhões de reais): ");
        scanf("%f", &cartas[i].pib);

        printf("Digite o número de pontos turísticos: ");
        scanf("%d", &cartas[i].pontos_turisticos);
    }

    // Exibição das cartas
    printf("\n========== CARTAS CADASTRADAS ==========\n");
    for (int i = 0; i < NUM_CARTAS; i++) {
        printf("\nCarta %d:\n", i + 1);
        printf("Estado: %s\n", cartas[i].estado);
        printf("Código: %s\n", cartas[i].codigo);
        printf("Nome da Cidade: %s\n", cartas[i].nome_cidade);
        printf("População: %d habitantes\n", cartas[i].populacao);
        printf("Área: %.2f km²\n", cartas[i].area);
        printf("PIB: %.2f bilhões de reais\n", cartas[i].pib);
        printf("Pontos Turísticos: %d\n", cartas[i].pontos_turisticos);
    }

    printf("\n========================================\n");
    return 0;
}