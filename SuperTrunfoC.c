#include <stdio.h>

    typedef struct {
        char estado;
        char codigo[4];
        char nome[50];
        int populacao;
        float area;
        float pib;
        int pontos;
    } Carta; //estrutura de variaveis necessarias por carta.

int main() {
    
    Carta carta1, carta2; //função para coleta de dados por Carta.
    float densidade1, densidade2, pibpercapta1, pibpercapta2; // funções de cálculo adicionais.

    // Dados para a primeira carta
    printf("\nFavor inserir os dados da primeira carta:\n");

    printf("Estado (A-H): ");
    scanf(" %c", &carta1.estado);

    printf("Código da Carta (Ex: A01, B03): ");
    scanf("%s", carta1.codigo);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", carta1.nome); //tratamento para problema com buffer do teclado.

    printf("População: ");
    scanf("%d", &carta1.populacao);

    printf("Área (km²): ");
    scanf("%f", &carta1.area);

    printf("PIB: ");
    scanf("%f", &carta1.pib);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta1.pontos);
    
   densidade1 = carta1.populacao / carta1.area; //cálculo de densidade populacional da cidade.
   pibpercapta1 = carta1.pib / carta1.populacao; // cálculo de PIB per Capta da cidade.
    
    // Dados para a segunda carta
    printf("\nFavor inserir os dados da segunda carta:\n");

    printf("Estado (A-H): ");
    scanf(" %c", &carta2.estado);

    printf("Código da Carta (Ex: A01, B03): ");
    scanf("%s", carta2.codigo);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", carta2.nome); //tratamento para problema com buffer do teclado.

    printf("População: ");
    scanf("%d", &carta2.populacao);

    printf("Área (km²): ");
    scanf("%f", &carta2.area);

    printf("PIB: ");
    scanf("%f", &carta2.pib);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta2.pontos);
    
   densidade2 = carta2.populacao / carta2.area; //cálculo de densidade populacional da cidade.
   pibpercapta2 = carta2.pib / carta2.populacao; // cálculo de PIB per Capta da cidade.
 
       //Apresentação na tela dos dados das duas cartas
    printf("\nDados da carta 01:\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nome);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f\n", carta1.pib);
    printf("Número de Pontos Turísticos: %d\n", carta1.pontos);
    printf("Densidade Populaciona: %.2f\n", densidade1);
    printf("PIB per Capta Municipal: %.2f\n\n", pibpercapta1);
    
    
    printf("\nDados da carta 02:\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nome);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f\n", carta2.pib);
    printf("Número de Pontos Turísticos: %d\n", carta2.pontos);
    printf("Densidade Populaciona: %.2f\n", densidade2);
    printf("PIB per Capta Municipal: %.2f\n\n", pibpercapta2);
    
    return 0;
}
