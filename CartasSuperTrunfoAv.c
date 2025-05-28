#include <stdio.h> // Standard input/output library for functions like printf and scanf
#include <string.h> // String manipulation library (not strictly necessary for this simplified version)

int main() {
    // --- Card 1 Data ---
    char estado1;
    char codigoCarta1[5];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1; // GDP in billions of reais
    int pontosTuristicos1;
    float densidadePopulacional1; // New variable for population density
    float pibPerCapita1;         // New variable for GDP per capita

    // --- Card 2 Data ---
    char estado2;
    char codigoCarta2[5];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2; // GDP in billions of reais
    int pontosTuristicos2;
    float densidadePopulacional2; // New variable for population density
    float pibPerCapita2;         // New variable for GDP per capita

    // --- Input for Card 1 ---
    printf("--- Enter data for Card 1 ---\n");

    printf("State (A-H): ");
    scanf(" %c", &estado1); // Note the space before %c to consume any leftover newline character

    printf("Card Code (e.g., A01): ");
    scanf("%s", codigoCarta1); // %s reads a string until whitespace

    printf("City Name: ");
    // Use scanf with %49[^\n] to read a line with spaces, up to 49 characters, stopping before newline
    // The space before %*c is crucial to consume the previous newline character left by scanf
    scanf(" %49[^\n]%*c", nomeCidade1);

    printf("Population: ");
    scanf("%d", &populacao1);

    printf("Area (in km²): ");
    scanf("%f", &area1);

    printf("GDP (in billions of reais): ");
    scanf("%f", &pib1);

    printf("Number of Tourist Attractions: ");
    scanf("%d", &pontosTuristicos1);

    // --- Calculations for Card 1 ---
    // Population is in units, GDP is in billions.
    // For GDP per Capita, we need to convert GDP to the same unit as population.
    // We multiply GDP (in billions) by 1,000,000,000 to get the total value in reais.
    densidadePopulacional1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0F) / populacao1;

    printf("\n"); // Add a newline for better readability between card inputs

    // --- Input for Card 2 ---
    printf("--- Enter data for Card 2 ---\n");

    printf("State (A-H): ");
    scanf(" %c", &estado2);

    printf("Card Code (e.g., B02): ");
    scanf("%s", codigoCarta2);

    printf("City Name: ");
    scanf(" %49[^\n]%*c", nomeCidade2);

    printf("Population: ");
    scanf("%d", &populacao2);

    printf("Area (in km²): ");
    scanf("%f", &area2);

    printf("GDP (in billions of reais): ");
    scanf("%f", &pib2);

    printf("Number of Tourist Attractions: ");
    scanf("%d", &pontosTuristicos2);

    // --- Calculations for Card 2 ---
    densidadePopulacional2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0F) / populacao2;

    printf("\n"); // Add a newline for better readability before displaying data

    // --- Display Card 1 Data ---
    printf("--- Card 1 ---\n");
    printf("State: %c\n", estado1);
    printf("Code: %s\n", codigoCarta1);
    printf("City Name: %s\n", nomeCidade1);
    printf("Population: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1); // .2f formats float to two decimal places
    printf("GDP: %.2f billion reais\n", pib1);
    printf("Number of Tourist Attractions: %d\n", pontosTuristicos1);
    printf("Population Density: %.2f hab/km²\n", densidadePopulacional1); // Display calculated density
    printf("GDP per Capita: %.2f reais\n", pibPerCapita1);               // Display calculated GDP per capita
    printf("\n");

    // --- Display Card 2 Data ---
    printf("--- Card 2 ---\n");
    printf("State: %c\n", estado2);
    printf("Code: %s\n", codigoCarta2);
    printf("City Name: %s\n", nomeCidade2);
    printf("Population: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("GDP: %.2f billion reais\n", pib2);
    printf("Number of Tourist Attractions: %d\n", pontosTuristicos2);
    printf("Population Density: %.2f hab/km²\n", densidadePopulacional2);
    printf("GDP per Capita: %.2f reais\n", pibPerCapita2);

    return 0; // Indicate successful program execution
}