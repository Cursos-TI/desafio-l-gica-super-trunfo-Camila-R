#include <stdio.h>

int main(){
    //Variáveis para a carta 1
    char estado1, codigoCarta1[3], cidade1[30];
    unsigned int populacao1;
    float areaKM1, pibCidade1, densidadePop1, inversoDensidadePop1, pibPerCapita1, superPower1;
    int quantTur1;

    //Variáveis para a carta 2
    char estado2, codigoCarta2[3], cidade2[30];
    unsigned int populacao2;
    float areaKM2, pibCidade2, densidadePop2, inversoDensidadePop2, pibPerCapita2, superPower2;
    int quantTur2;

    //Variável escolha e soma
    int escolha1, escolha2, comparacao1, comparacao2;
    unsigned int soma1, soma2;
    float valor1, valor2;

    //Recebendo os dados das cartas
    //Carta1
    printf("----------------------------------- \n");
    printf("-Digite os dados da primeira carta- \n");
    printf("----------------------------------- \n");
    printf("Digite a letra do Estado (entre A a H): ");
    scanf(" %c", &estado1);

    printf("O código da carta (entre 01 a 04): ");
    scanf("%s", codigoCarta1);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);

    printf("Digite a população: ");
    scanf("%u", &populacao1);

    printf("Digite a área (em km²): ");
    scanf("%f", &areaKM1);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pibCidade1);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &quantTur1);

    //Carta2
    printf("---------------------------------- \n");
    printf("-Digite os dados da segunda carta- \n");
    printf("---------------------------------- \n");
    printf("Digite a letra do Estado (entre A a H):");
    scanf(" %c", &estado2);

    printf("O código da carta (entre 01 a 04): ");
    scanf("%s", codigoCarta2);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);

    printf("Digite a população: ");
    scanf("%u", &populacao2);

    printf("Digite a área (em km²): ");
    scanf("%f", &areaKM2);
    
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pibCidade2);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &quantTur2);

    // Calculando a densidade populacional e o PIB per capita
    densidadePop1 = populacao1 / areaKM1;
    pibPerCapita1 = (pibCidade1 * 1000000000) / populacao1;

    densidadePop2 = populacao2 / areaKM2;
    pibPerCapita2 = (pibCidade2 * 1000000000) / populacao2;

    // Calculando o inverso da densidade populacional
    inversoDensidadePop1 = areaKM1 / populacao1;
    inversoDensidadePop2 = areaKM2 / populacao2;
    
    // Calculando o Super Poder
    superPower1 = (float)populacao1 + (float)areaKM1 + (float)pibCidade1 + (float)quantTur1 + (float)inversoDensidadePop1 + (float)pibPerCapita1;
    superPower2 = (float)populacao2 + (float)areaKM2 + (float)pibCidade2 + (float)quantTur2 + (float)inversoDensidadePop2 + (float)pibPerCapita2;

    printf("\n\n\n");

    // Menu interativo
    printf("---------------------------- \n");
    printf("--------SUPER TRUNFO-------- \n");
    printf("---------------------------- \n");
    printf("----Compare os atributos---- \n");
    printf("---------------------------- \n");
    printf("---Escolha dois atributos--- \n");
    printf("---------------------------- \n");
    printf("[ 1 ] População \n");
    printf("[ 2 ] Área (em km²) \n");
    printf("[ 3 ] PIB da Cidade \n");
    printf("[ 4 ] Pontos Turísticos \n");
    printf("[ 5 ] Densidade Populacional \n");
    printf("[ 6 ] PIB Per Capita \n");
    printf("[ 7 ] Super Trunfo \n");
    printf("---------------------------- \n");
    printf("Digite sua primeira escolha:  \n");
    printf("---------------------------- \n");
    scanf("%d", &escolha1);

    switch (escolha1) {
        case 1:
            comparacao1 = populacao1 > populacao2 ? 1 : 0;
            break;
        case 2:
            comparacao1 = areaKM1 > areaKM2 ? 1 : 0;
            break;
        case 3:
            comparacao1 = pibCidade1 > pibCidade2 ? 1 : 0;
            break;
        case 4:
            comparacao1 = quantTur1 > quantTur2 ? 1 : 0;
            break;
        case 5:
            comparacao1 = densidadePop1 < densidadePop2 ? 1 : 0;
            break;
        case 6:
            comparacao1 = pibPerCapita1 > pibPerCapita2 ? 1 : 0;
            break;
        case 7:
            comparacao1 = superPower1 > superPower2 ? 1 : 0;
            break;
        default:
            printf("Escolha inválida!\n");
            return 1;
    }

    // Segunda escolha
    printf("-------------------------------------------------------- \n");
    printf("Agora escolha o segundo atributo (diferente do primeiro):\n");
    printf("-------------------------------------------------------- \n");
    if (escolha1 != 1) printf("[ 1 ] População\n");
    if (escolha1 != 2) printf("[ 2 ] Área (em km²)\n");
    if (escolha1 != 3) printf("[ 3 ] PIB da Cidade\n");
    if (escolha1 != 4) printf("[ 4 ] Pontos Turísticos\n");
    if (escolha1 != 5) printf("[ 5 ] Densidade Populacional\n");
    if (escolha1 != 6) printf("[ 6 ] PIB Per Capita\n");
    if (escolha1 != 7) printf("[ 7 ] Super Trunfo\n");
    printf("Digite sua segunda escolha:  \n");
    printf("---------------------------- \n");
    scanf("%d", &escolha2);

    if (escolha1 != escolha2) {
        switch (escolha2) {
            case 1:
                comparacao2 = populacao1 > populacao2 ? 1 : 0;
                break;
            case 2:
                comparacao2 = areaKM1 > areaKM2 ? 1 : 0;
                break;
            case 3:
                comparacao2 = pibCidade1 > pibCidade2 ? 1 : 0;
                break;
            case 4:
                comparacao2 = quantTur1 > quantTur2 ? 1 : 0;
                break;
            case 5:
                comparacao2 = densidadePop1 < densidadePop2 ? 1 : 0;
                break;
            case 6:
                comparacao2 = pibPerCapita1 > pibPerCapita2 ? 1 : 0;
                break;
            case 7:
                comparacao2 = superPower1 > superPower2 ? 1 : 0;
                break;
            default:
                printf("Escolha inválida!\n");
                return 1;
        }
    } else {
        printf("ERROR: Não pode escolher o mesmo atributo duas vezes!\n");
        return 1;
    }

    soma1 = comparacao1 + comparacao2;
    soma2 = 2 - soma1;

    // Imprimindo o resultado final
    printf(" ### Resultado ###\n");
    printf("Cidades comparadas: \n Carta 1 - %s x Carta 2 - %s \n", cidade1, cidade2);
    printf("--------------------------------------------------------------------\n");
    printf("Atributos comparados: \n");
    printf(">> Primeira escolha: \n");
    switch (escolha1) {
        case 1:
            printf("População : \n Carta 1 - %u x Carta 2 - %u \n", populacao1, populacao2);
            break;
        case 2:
            printf("Área (em km²) : \n Carta 1 - %f x Carta 2 - %f \n", areaKM1, areaKM2);
            break;
        case 3:
            printf("PIB da Cidade : \n Carta 1 - %f x Carta 2 - %f \n", pibCidade1, pibCidade2);
            break;
        case 4:
            printf("Pontos Turísticos : \n Carta 1 - %d x Carta 2 - %d \n", quantTur1, quantTur2);
            break;
        case 5:
            printf("Densidade Populacional : \n Carta 1 - %.2f x Carta 2 - %.2f \n", densidadePop1, densidadePop2);
            break;
        case 6:
            printf("PIB Per Capita : \n Carta 1 - %.2f x Carta 2 - %.2f \n", pibPerCapita1, pibPerCapita2);
            break;
        case 7:
            printf("Super Trunfo : \n Carta 1 - %.2f x Carta 2 - %.2f \n", superPower1, superPower2);
            break;
    }
    printf(">> Segunda escolha: ");
    switch (escolha2) {
        case 1:
            printf("População : \n Carta 1 - %u x Carta 2 - %u \n", populacao1, populacao2);
            break;
        case 2:
            printf("Área (em km²) : \n Carta 1 - %f x Carta 2 - %f \n", areaKM1, areaKM2);
            break;
        case 3:
            printf("PIB da Cidade : \n Carta 1 - %f x Carta 2 - %f \n", pibCidade1, pibCidade2);
            break;
        case 4:
            printf("Pontos Turísticos : \n Carta 1 - %d x Carta 2 - %d \n", quantTur1, quantTur2);
            break;
        case 5:
            printf("Densidade Populacional : \n Carta 1 - %.2f x Carta 2 - %.2f \n", densidadePop1, densidadePop2);
            break;
        case 6:
            printf("PIB Per Capita : \n Carta 1 - %.2f x Carta 2 - %.2f \n", pibPerCapita1, pibPerCapita2);
            break;
        case 7:
            printf("Super Trunfo : \n Carta 1 - %.2f x Carta 2 - %.2f \n", superPower1, superPower2);
            break;
    }

    printf("--------------------------------------------------------------------\n");
    if (soma1 == 2) {
        printf("Carta 1 Venceu\n");
    } else if (soma2 == 2) {
        printf("Carta 2 Venceu\n");
    } else {
        printf("Empate\n");
    }

    return 0;

}