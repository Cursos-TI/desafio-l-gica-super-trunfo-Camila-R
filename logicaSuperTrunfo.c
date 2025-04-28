#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    //Variáveis para a carta 1
    char estado1, codigoCarta1[3], cidade1[30];
    unsigned int populacao1;
    float areaKM1, pibCidade1, densidadePop1, pibPerCapita1;
    int quantTur1;

    //Variáveis para a carta 2
    char estado2, codigoCarta2[3], cidade2[30];
    unsigned int populacao2;
    float areaKM2, pibCidade2, densidadePop2, pibPerCapita2;
    int quantTur2;

    
    //Recebendo os dados das cartas
    //Carta1
    printf("----------------------------------- \n");
    printf("Digite os dados da primeira carta \n");
    printf("----------------------------------- \n");
    printf("Digite a letra do Estado (entre A a H): ");
    scanf(" %c", &estado1);

    printf("O código da carta (entre 01 a 04): ");
    scanf("%s", codigoCarta1);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);

    printf("Digite a população: ");
    scanf("%f", &populacao1);

    printf("Digite a área (em km²): ");
    scanf("%f", &areaKM1);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pibCidade1);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &quantTur1);

    //Carta2
    printf("----------------------------------- \n");
    printf("Digite os dados da segunda carta \n");
    printf("----------------------------------- \n");
    printf("Digite a letra do Estado (entre A a H):");
    scanf(" %c", &estado2);

    printf("O código da carta (entre 01 a 04): ");
    scanf("%s", codigoCarta2);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);

    printf("Digite a população: ");
    scanf("%f", &populacao2);

    printf("Digite a área (em km²): ");
    scanf("%f", &areaKM2);
    
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pibCidade2);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &quantTur2);

    // Comparação de Cartas:
    printf("----------------------------------- \n");
    printf("Comparação de cartas (Atributo: PIB) \n");
    printf("----------------------------------- \n");
    printf("Carta 1 - %s: %.2f bilhões de reais \n", cidade1, pibCidade1);
    printf("Carta 2 - %s: %.2f bilhões de reais \n", cidade2, pibCidade2);
    if(pibCidade1 > pibCidade2){
        printf("Resultado: Carta 1 - %s venceu!", cidade1);
    } else{
        printf("Resultado: Carta 2 - %s venceu!", cidade2);
    }

    return 0;
}
