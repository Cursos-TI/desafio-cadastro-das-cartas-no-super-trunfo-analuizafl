#include <stdio.h>

int main() {
    // Declaração das variáveis para armazenar os dados das cartas
    
    // -------- Carta 1 --------
    char codigo1[4];           // Código da carta 
    int populacao1;            // População do país
    float area1;               // Área do país
    float pib1;                // PIB do país
    int pontosTuristicos1;     // Número de pontos turísticos

    // -------- Carta 2 --------
    char codigo2[4];           
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2; 

    // ---------- Cadastro da Carta 1 ----------
    printf("Digite o código da Carta 1: "); 
    scanf("%s", codigo1);     // Lê o código da carta 1

    printf("Digite a população da Carta 1: ");
    scanf("%d", &populacao1); // Lê a população da carta 1

    printf("Digite a área da Carta 1: ");
    scanf("%f", &area1);      // Lê a área da carta 1

    printf("Digite o PIB da Carta 1: ");
    scanf("%f", &pib1);       // Lê o PIB da carta 1

    printf("Digite o número de pontos turísticos da Carta 1: ");
    scanf("%d", &pontosTuristicos1); // Lê os pontos turísticos

    // ---------- Cadastro da Carta 2 ----------
    printf("\nDigite o código da Carta 2 (ex: B02): ");
    scanf("%s", codigo2);     // Lê o código da carta 2

    printf("Digite a população da Carta 2: ");
    scanf("%d", &populacao2); // Lê a população da carta 2

    printf("Digite a área da Carta 2: ");
    scanf("%f", &area2);      // Lê a área da carta 2

    printf("Digite o PIB da Carta 2: ");
    scanf("%f", &pib2);       // Lê o PIB da carta 2

    printf("Digite o número de pontos turísticos da Carta 2: ");
    scanf("%d", &pontosTuristicos2); // Lê os pontos turísticos

    // ---------- Exibindo os dados cadastrados ----------
    printf("\n--- Carta 1 ---\n");
    printf("Código: %s\n", codigo1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\n--- Carta 2 ---\n");
    printf("Código: %s\n", codigo2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0; // Finaliza o programa
} 