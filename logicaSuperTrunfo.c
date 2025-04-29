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

    //Variável escolha
    int escolha;

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
    printf("-------------------------- \n");
    printf("-------SUPER TRUNFO------- \n");
    printf("-------------------------- \n");
    printf("---Compare os atributos--- \n");
    printf("-------------------------- \n");
    printf("[ 1 ] População \n");
    printf("[ 2 ] Área (em km²) \n");
    printf("[ 3 ] PIB da Cidade \n");
    printf("[ 4 ] Pontos Turísticos \n");
    printf("[ 5 ] Densidade Populacional \n");
    printf("[ 6 ] PIB Per Capita \n");
    printf("[ 7 ] Super Trunfo \n");
    scanf("%d", &escolha);

    // Comparação de Atributos
    switch (escolha) {
        case 1:
            printf("------------------------------------- \n");
            printf("##  Cidades comparadas ##  \n Carta 1 - %s x Carta 2 - %s \n", cidade1, cidade2);
            printf("------------------------------------- \n");
            printf("## Atributo escolhido: População ## \n");
            printf("------------------------------------- \n");
            printf("## Valores para o atributo escolhido ## \n Carta 1 - %u x Carta 2 - %u \n", populacao1, populacao2);
            printf("------------------------------------- \n");
            if(populacao1 > populacao2){
                printf("A Carta 1 Venceu!");

            }else if(populacao1 < populacao2){
                printf("A Carta 2 Venceu!");

            }else{
                printf("## OPA! Empatou! ##");
            }
            break;
        
        case 2:
            printf("------------------------------------- \n");
            printf("##  Cidades comparadas ##  \n Carta 1 - %s x Carta 2 - %s \n", cidade1, cidade2);
            printf("------------------------------------- \n");
            printf("## Atributo escolhido: Área (em km²) ##");
            printf("------------------------------------- \n");
            printf("## Valores para o atributo escolhido ## \n Carta 1 - %f x Carta 2 - %f \n", areaKM1, areaKM2);
            printf("------------------------------------- \n");
            if(areaKM1 > areaKM2){
                printf("A Carta 1 Venceu!");
                
            }else if(areaKM1 < areaKM2){
                printf("A Carta 2 Venceu!");

            }else{
                printf("## OPA! Empatou! ##");
            }
            break;
        
        case 3:
            printf("------------------------------------- \n");
            printf("##  Cidades comparadas ##  \n Carta 1 - %s x Carta 2 - %s \n", cidade1, cidade2);
            printf("------------------------------------- \n");
            printf("## Atributo escolhido: PIB da Cidade ##");
            printf("------------------------------------- \n");
            printf("## Valores para o atributo escolhido ## \n Carta 1 - %f x Carta 2 - %f \n", pibCidade1, pibCidade2);
            printf("------------------------------------- \n");
            if(pibCidade1 > pibCidade2){
                printf("A Carta 1 Venceu!");

            }else if(pibCidade1 < pibCidade2){
                printf("A Carta 2 Venceu!");

            }else{
                printf("## OPA! Empatou! ##");
            }
            break;
        
        case 4:
            printf("------------------------------------- \n");
            printf("##  Cidades comparadas ##  \n Carta 1 - %s x Carta 2 - %s \n", cidade1, cidade2);
            printf("------------------------------------- \n");
            printf("## Atributo escolhido: Pontos Turísticos ##");
            printf("------------------------------------- \n");
            printf("## Valores para o atributo escolhido ## \n Carta 1 - %d x Carta 2 - %d \n", quantTur1, quantTur2);
            printf("------------------------------------- \n");
            if(quantTur1 > quantTur2){
                printf("A Carta 1 Venceu!");

            }else if(quantTur1 < quantTur2){
                printf("A Carta 2 Venceu!");

            }else{
                printf("## OPA! Empatou! ##");
            }
            break;
        
        case 5:
            printf("------------------------------------- \n");
            printf("##  Cidades comparadas ##  \n Carta 1 - %s x Carta 2 - %s \n", cidade1, cidade2);
            printf("------------------------------------- \n");
            printf("## Atributo escolhido: Densidade Populacional ##");
            printf("------------------------------------- \n");
            printf("## Valores para o atributo escolhido ## \n Carta 1 - %.2f x Carta 2 - %.2f \n", densidadePop1, densidadePop2);
            printf("------------------------------------- \n");
            if(densidadePop1 < densidadePop2){
                printf("A Carta 1 Venceu!");

            }else if(densidadePop1 > densidadePop2){
                printf("A Carta 2 Venceu!");

            }else{
                printf("## OPA! Empatou! ##");
            }
            break;
        
        case 6:
            printf("------------------------------------- \n");
            printf("##  Cidades comparadas ##  \n Carta 1 - %s x Carta 2 - %s \n", cidade1, cidade2);
            printf("------------------------------------- \n");
            printf("## Atributo escolhido: PIB Per Capita ##");
            printf("------------------------------------- \n");
            printf("## Valores para o atributo escolhido ## \n Carta 1 - %.2f x Carta 2 - %.2f \n", pibPerCapita1, pibPerCapita2);
            printf("------------------------------------- \n");
            if(pibPerCapita1 > pibPerCapita2){
                printf("A Carta 1 Venceu!");

            }else if(pibPerCapita1 < pibPerCapita2){
                printf("A Carta 2 Venceu!");

            }else{
                printf("## OPA! Empatou! ##");
            }
            break;
        
        case 7:
            printf("------------------------------------- \n");
            printf("##  Cidades comparadas ##  \n Carta 1 - %s x Carta 2 - %s \n", cidade1, cidade2);
            printf("------------------------------------- \n");
            printf("## Atributo escolhido: Super Trunfo ##");
            printf("------------------------------------- \n");
            printf("## Valores para o atributo escolhido ## \n Carta 1 - %.2f x Carta 2 - %.2f \n", superPower1, superPower2);
            printf("------------------------------------- \n");
            if(superPower1 > superPower2){
                printf("A Carta 1 Venceu!");

            }else if(superPower1 < superPower2){
                printf("A Carta 2 Venceu!");

            }else{
                printf("## OPA! Empatou! ##");
            }
            break;
        
        default:
            printf("Opção inválida");
            break;
    }

    return 0;

}