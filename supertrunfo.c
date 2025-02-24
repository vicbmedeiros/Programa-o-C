#include <stdio.h>

int main(){
    char estado1;
    char codigo1[2];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontoturistico1;

    printf("Carta 1: \n");

    printf("Digite o estado: \n");
    scanf("%c", &estado1);

    printf("Digite o código: \n");
    scanf("%2s", codigo1);

    printf("Digite a cidade: \n");
    scanf("%49s", cidade1); 

    printf("Digite a população: \n");
    scanf("%d", &populacao1);

    printf("Digite a area: \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Digite o número de Pontos Turísticos: \n");
    scanf("%d", &pontoturistico1);

    printf("Carta 1: \n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da cidade: %s \n", cidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %f \n", area1);
    printf("PIB: %f bilhões de reais \n", pib1);
    printf("Número de Pontos Turísticos: %d \n", pontoturistico1);

    char estado2;
    char codigo2[2];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontoturistico2;

    printf("Carta 2: \n");

    printf("Digite o estado: \n");
    scanf("%c", &estado2);

    printf("Digite o código: \n");
    scanf("%2s", codigo2);

    printf("Digite a cidade: \n");
    scanf("%49s", cidade2); 

    printf("Digite a população: \n");
    scanf("%d", &populacao2);

    printf("Digite a area: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite o número de Pontos Turísticos: \n");
    scanf("%d", &pontoturistico2);

    printf("Carta 1: \n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %f.2 \n", area2);
    printf("PIB: %f.2 bilhões de reais \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", pontoturistico2);

    return 0;

}