#include <stdio.h>
#include <locale.h>

int main() {
    // Ajuste de localidade para português do Brasil
    setlocale(LC_ALL, "pt_BR.UTF-8"); 
    setlocale(LC_NUMERIC, "C");

    // Declaração das variáveis
    char estado[20];
    char codigo_da_carta[20];
    char nome_da_cidade[50];
    int populacao;
    float area;
    float pib;
    float densidade;
    int pontos_turisticos;
    float pib_per_capita;

    // Carta 1
    printf("Carta 1:\n");

    // Entrada dos dados
    printf("Estado: ");
    scanf("%s", estado);

    printf("Código: ");
    scanf("%s", codigo_da_carta);

    getchar(); // Limpa o buffer do teclado
    printf("Nome da Cidade: ");
    fgets(nome_da_cidade, sizeof(nome_da_cidade), stdin);

    printf("População: ");
    scanf("%d", &populacao);

    printf("Área: ");
    scanf("%f", &area);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos);

    // Cálculo da densidade populacional
    densidade = populacao / area;

    // Cálculo do PIB per capita (convertendo PIB de bilhões para reais)
    pib_per_capita = (pib * 1000000000) / populacao;

    // Exibindo os resultados da carta
    printf("\nDados da Carta 1:\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo_da_carta);
    printf("Nome da Cidade: %s", nome_da_cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita);


    // Carta 2
    printf("\nCarta 2:\n");

    // Entrada dos dados para a segunda carta
    printf("Estado: ");
    scanf("%s", estado);

    printf("Código: ");
    scanf("%s", codigo_da_carta);

    getchar(); // Limpa o buffer do teclado
    printf("Nome da Cidade: ");
    fgets(nome_da_cidade, sizeof(nome_da_cidade), stdin);

    printf("População: ");
    scanf("%d", &populacao);

    printf("Área: ");
    scanf("%f", &area);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos);

    // Cálculo da densidade populacional
    densidade = populacao / area;

    // Cálculo do PIB per capita (convertendo PIB de bilhões para reais)
    pib_per_capita = (pib * 1000000000) / populacao;

    // Exibindo os resultados da carta
    printf("\nDados da Carta 2:\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo_da_carta);
    printf("Nome da Cidade: %s", nome_da_cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita);

    return 0;
}
