#include <stdio.h>

int main() {
    // Declaração das variáveis
    
    // -------- Carta 1 --------
    char estado1;              
    char codigo1[4];           
    char nomeCidade1[50];      
    int   populacao1;          
    float area1;               
    float pib1;                // PIB em bilhões de reais
    int   pontosTuristicos1;   

    // -------- Carta 2 --------
    char estado2;              
    char codigo2[4];           
    char nomeCidade2[50];              
    int   populacao2;          
    float area2;               
    float pib2;                // PIB em bilhões de reais
    int   pontosTuristicos2;   

    // Entrada de dados da Carta 1
 
    printf("Digite o estado da Carta 1 (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o codigo da Carta 1 (ex: A01): ");
    scanf("%3s", codigo1);

    printf("Digite o nome da cidade da Carta 1: ");
    scanf(" %49[^\n]", nomeCidade1);

    printf("Digite a populacao da Carta 1: ");
    scanf("%d", &populacao1);

    printf("Digite a area da Carta 1 (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da Carta 1 (em bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos da Carta 1: ");
    scanf("%d", &pontosTuristicos1);

    // Entrada de dados da Carta 2

    printf("\nDigite o estado da Carta 2 (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da Carta 2 (ex: B02): ");
    scanf("%3s", codigo2);

    printf("Digite o nome da cidade da Carta 2: ");
    scanf(" %49[^\n]", nomeCidade2);

    printf("Digite a populacao da Carta 2: ");
    scanf("%d", &populacao2);

    printf("Digite a area da Carta 2 (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da Carta 2 (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos da Carta 2: ");
    scanf("%d", &pontosTuristicos2);

    
    // CÁLCULOS

    // Densidade Populacional = População / Área
    float densidade1 = (float)populacao1 / area1;
    float densidade2 = (float)populacao2 / area2;

    // PIB per Capita = (PIB em reais) / População
    float pibPerCapita1 = (pib1 * 1000000000.0f) / populacao1;
    float pibPerCapita2 = (pib2 * 1000000000.0f) / populacao2;

    // Saída formatada
    
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    return 0;
}