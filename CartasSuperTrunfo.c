#include <stdio.h>

int main() {
    char estado = 'A';
    char codigo[4] = "A00";
    char nome_cidade[15] = "aaaaa";
    float populacao = 2.2;
    float area = 1.1;
    float pib = 0.0;
    int pontos_turisticos = 1; 

    printf("Carta 1 - Digite o Estado:");
    scanf(" %c", &estado);

    printf("Carta 1 - Digite o Código:");
    scanf("%s", codigo);

    printf("Carta 1 - Digite a Cidade:");
    scanf("%s", nome_cidade);

    printf("Carta 1 - Digite a População:");
    scanf("%f", &populacao);

    printf("Carta 1 - Digite a Área:");
    scanf("%f", &area);

    printf("Carta 1 - Digite o PIB:");
    scanf("%f", &pib);

    printf("Carta 1 - Digite a Quantidade de Pontos Turisticos:");
    scanf("%d", &pontos_turisticos);

    float densidade_populacional1 = populacao / area;
    float pip_per_capita1 = pib / populacao;


    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", nome_cidade);
    printf("População: %f\n", populacao);
    printf("Área: %.2f km2\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Pontos Turisticos: %d\n", pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per Capita: %.2f reais\n", pip_per_capita1);


    printf("Carta 2 - Digite o Estado:");
    scanf(" %c", &estado);

    printf("Carta 2 - Digite o Código:");
    scanf("%s", codigo);

    printf("Carta 2 - Digite a Cidade:");
    scanf("%s", nome_cidade);

    printf("Carta 2 - Digite a População:");
    scanf("%f", &populacao);

    printf("Carta 2 - Digite a Área:");
    scanf("%f", &area);

    printf("Carta 2 - Digite o PIB:");
    scanf("%f", &pib);

    printf("Carta 2 - Digite a Quantidade de Pontos Turisticos:");
    scanf("%d", &pontos_turisticos);

    float densidade_populacional2 = populacao / area;
    float pip_per_capita2 = pib / populacao;

    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", nome_cidade);
    printf("População: %f\n", populacao);
    printf("Área: %.2f km2\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Pontos Turisticos: %d\n", pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n", pip_per_capita2);
   
    return 0;
}
