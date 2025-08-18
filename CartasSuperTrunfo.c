#include <stdio.h>

int main() {
    // Declaração das variáveis para armazenar os dados das cartas
    
    // -------- Carta 1 --------
    char estado1;              // Estado da cidade (uma letra)
    char codigo1[4];           // Código da carta (até 3 caracteres + '\0')
    char nomeCidade1[50];      // Nome da cidade (até 49 caracteres)
    int populacao1;            // População do país
    float area1;               // Área do país
    float pib1;                // PIB do país
    int pontosTuristicos1;     // Número de pontos turísticos

    // -------- Carta 2 --------
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2; 

    // ---------- Cadastro da Carta 1 ----------
    printf("Digite o estado da Carta 1 (A-H): ");
    scanf(" %c", &estado1); // espaço antes do %c para consumir newline

    printf("Digite o código da Carta 1 (ex: A01): ");
    scanf("%3s", codigo1);   // Limita a leitura a 3 caracteres

    printf("Digite o nome da cidade da Carta 1: ");
    scanf(" %49[^\n]", nomeCidade1); // Lê até 49 caracteres ou quebra de linha

    printf("Digite a população da Carta 1: ");
    scanf("%d", &populacao1);

    printf("Digite a área da Carta 1: ");
    scanf("%f", &area1);

    printf("Digite o PIB da Carta 1: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da Carta 1: ");
    scanf("%d", &pontosTuristicos1);

    // ---------- Cadastro da Carta 2 ----------
    printf("\nDigite o estado da Carta 2 (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o código da Carta 2 (ex: B02): ");
    scanf("%3s", codigo2);

    printf("Digite o nome da cidade da Carta 2: ");
    scanf(" %49[^\n]", nomeCidade2);

    printf("Digite a população da Carta 2: ");
    scanf("%d", &populacao2);

    printf("Digite a área da Carta 2: ");
    scanf("%f", &area2);

    printf("Digite o PIB da Carta 2: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da Carta 2: ");
    scanf("%d", &pontosTuristicos2);

    // ---------- Exibindo os dados cadastrados ----------
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}