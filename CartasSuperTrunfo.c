#include <stdio.h>

int main() {
    
    char estado1[] = "Rio de Janeiro";
    char codigo1[] = "A01";
    char cidade1[] = "Rio de Janeiro";
    int populacao1 = 6730729;
    float area1 = 1200.0;
    float pib1 = 1300000000000.0; // em reais
    int pontos_turisticos1 = 1746;

    printf("Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n\n", pontos_turisticos1);

    
    char estado2[] = "Bahia";
    char codigo2[] = "A02";
    char cidade2[] = "Salvador";
    int populacao2 = 14850513;
    float area2 = 559951.0;
    float pib2 = 482800000000.0;
    int pontos_turisticos2 = 0;

    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);

    return 0;
}
