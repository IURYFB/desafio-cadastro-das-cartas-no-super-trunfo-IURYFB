#include <stdio.h>

int main() {
    printf("SUPER TRUNFO!\n\n");

    // Carta 1 - Pernambuco
    char Estado1 = 'P';
    char Codigodacarta1[] = "P01";
    char NomeDaCidade1[] = "Pernambuco";
    int Populacao1 = 9616621;
    float Area1 = 98067.881;
    float PIB1 = 205.4;
    int NumeroDePontosTuristicos1 = 20;

    printf("Carta 1:\n");
    printf("Estado: %c\n", Estado1);
    printf("Código da Carta: %s\n", Codigodacarta1);
    printf("Nome da Cidade: %s\n", NomeDaCidade1);
    printf("População: %d\n", Populacao1);
    printf("Área: %.3f km²\n", Area1);
    printf("PIB: %.2f bilhões\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n\n", NumeroDePontosTuristicos1);

    // Carta 2 - Paraíba
    char Estado2 = 'B';
    char Codigodacarta2[] = "P02";
    char NomeDaCidade2[] = "Paraíba";
    int Populacao2 = 4039277;
    float Area2 = 56584.600;
    float PIB2 = 75.2;
    int NumeroDePontosTuristicos2 = 15;

    printf("Carta 2:\n");
    printf("Estado: %c\n", Estado2);
    printf("Código da Carta: %s\n", Codigodacarta2);
    printf("Nome da Cidade: %s\n", NomeDaCidade2);
    printf("População: %d\n", Populacao2);
    printf("Área: %.3f km²\n", Area2);
    printf("PIB: %.2f bilhões\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", NumeroDePontosTuristicos2);

    return 0;
}
