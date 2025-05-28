#include <stdio.h> // Standard input/output library for functions like printf and scanf
#include <string.h> // String manipulation library (not strictly necessary for this simplified version, but good practice for char arrays)

int main() {
    // --- Card 1 Data ---
    char estado1;
    char codigoCarta1[5]; // e.g., "A01" + null terminator
    char nomeCidade1[50]; // Max 49 characters + null terminator
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // --- Card 2 Data ---
    char estado2;
    char codigoCarta2[5];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // --- Input for Card 1 ---
    printf("--- Inserir dados para a Carta 1 ---\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1); // Note the space before %c to consume any leftover newline character

    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigoCarta1); // %s reads a string until whitespace

    printf("Nome da Cidade: ");
    // Use scanf with %49[^\n] to read a line with spaces, up to 49 characters, stopping before newline
    // The space before %*c is crucial to consume the previous newline character left by scanf
    scanf(" %49[^\n]%*c", nomeCidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\n"); // Add a newline for better readability between card inputs

    // --- Input for Card 2 ---
    printf("--- Inserir dados para a Carta 2 ---\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Código da Carta (ex: B02): ");
    scanf("%s", codigoCarta2);

    printf("Nome da Cidade: ");
    scanf(" %49[^\n]%*c", nomeCidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    printf("\n"); // Add a newline for better readability before displaying data

    // --- Display Card 1 Data ---
    printf("--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1); // .2f formats float to two decimal places
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("\n");

    // --- Display Card 2 Data ---
    printf("--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0; // Indicate successful program execution
}
    printf("Novo Comit!\n");