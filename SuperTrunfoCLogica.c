#include <stdio.h>

    //estrutura de variáveis necessarias por carta.
    typedef struct {
        int populacao;
        float area;
        float pib;
        int pontos;
    } Carta; 

int main() {
    
    Carta carta1, carta2; //função para coleta de dados por Carta.
    float densidade1, densidade2, pibpercapta1, pibpercapta2; // variável de cálculos adicionais.
    int comparacao; // variável utilizada na comparação dos dados.
    
    
    printf("Seja bem vindo ao nosso jogo de Super Trunfo!\n");
    printf("Compare os valores de suas cartas e vença!\n\n");
    printf("As cidades terão um nome fixo, sendo Cidade1 (A01) e Cidade2 (B01)\n");

    // Dados para a primeira carta (Cidade1).
    printf("\nFavor inserir os dados da primeira carta (Cidade1):\n");

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
    
    // Dados para a segunda carta (Cidade2).
    printf("\nFavor inserir os dados da segunda carta (Cidade2):\n");
    printf("População: ");
    scanf("%d", &carta2.populacao);
    printf("Área (km²): ");
    scanf("%f", &carta2.area);
    printf("PIB: ");
    scanf("%f", &carta2.pib);
    printf("Número de Pontos Turísticos:");
    scanf("%d", &carta2.pontos);
    
   densidade2 = carta2.populacao / carta2.area; //cálculo de densidade populacional da cidade.
   pibpercapta2 = carta2.pib / carta2.populacao; // cálculo de PIB per Capta da cidade.

    //Informações coletadas da primeira carta (Cidade1).
    printf("\nEstado: A\nCódigo: A01\nNome: Cidade1\n");
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f\n", carta1.pib);
    printf("Número de Pontos Turísticos: %d\n", carta1.pontos);
    printf("Densidade Populaciona: %.2f\n", densidade1);
    printf("PIB per Capta Municipal: %.2f\n\n", pibpercapta1);
  
    //Informações coletadas da segunda carta (Cidade2). 
    printf("Estado: B\nCódigo: B01\nNome: Cidade2\n");
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f\n", carta2.pib);
    printf("Número de Pontos Turísticos: %d\n", carta2.pontos);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB per Capta Municipal: %.2f\n\n", pibpercapta2);
    
    // menu de opções para comparação.
    printf("Vamos começar a comparar:\nDigite no menu abaixo quais dados você quer comparar:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Número de Pontos Turísticos\n5 - Densidade Populacional\n");
    printf("6 - PIB per Capta Municipal\n\n");
    
    scanf("%d", &comparacao); // chamada de dados - baseada nas opções do menu acima.
    
    // Função switch para estruturar as comparações isoladamente, de acordo com a escolha do usuário/aleatóriamente.
    switch (comparacao) {
        case 1:
            printf("A comparação de população é:\n");
            printf("Carta 01 - Cidade1 (A01): %d Habitantes.\n", carta1.populacao);
            printf("Carta 02 - Cidade2 (B01): %d Habitantes.\n", carta2.populacao);
        if (carta1.populacao == carta2.populacao) {             // em caso de empate.
                printf("Empate, jogue novamente!");
            } else {                                            // em caso de vitória e derrota.
                if (carta1.populacao > carta2.populacao) {
                    printf("Resultado: Carta 01 venceu.");
                    } else {
                    printf("Resultado: Carta 02 venceu.");
            }} break;
        case 2:
            printf("A comparação de área é:\n");
            printf("Carta 01 - Cidade1 (A01): Área de %.2f Km2.\n", carta1.area);
            printf("Carta 02 - Cidade2 (B01): Área de %.2f Km2.\n", carta2.area);
        if (carta1.area == carta2.area) { // em caso de empate.
                printf("Empate, jogue novamente!");
            } else {
                if (carta1.area > carta2.area) {
                    printf("Resultado: Carta 01 venceu.");
                    } else {
                    printf("Resultado: Carta 02 venceu.");
            }} break;
        case 3:
            printf("A comparação de PIB é:\n");
            printf("Carta 01 - Cidade1 (A01): PIB de %.2f anual.\n", carta1.pib);
            printf("Carta 02 - Cidade2 (B01): PIB de %.2f anual.\n", carta2.pib);
        if (carta1.pib == carta2.pib) { // em caso de empate.
                printf("Empate, jogue novamente!");
            } else {
                if (carta1.pib > carta2.pib) {
                        printf("Resultado: Carta 01 venceu.");
                    } else {
                        printf("Resultado: Carta 02 venceu.");
            }} break;
        case 4:
            printf("A comparação de pontos turísticos é:\n");
            printf("Carta 01 - Cidade1 (A01): %d Ponto(s) Turístico(s).\n", carta1.pontos);
            printf("Carta 02 - Cidade2 (B01): %d Ponto(s) Turístico(s).\n", carta2.pontos);
        if (carta1.pontos == carta2.pontos) { // em caso de empate.
                printf("Empate, jogue novamente!");
            } else {
                if (carta1.pontos > carta2.pontos) {
                        printf("Resultado: Carta 01 venceu.");
                    } else {
                        printf("Resultado: Carta 02 venceu.");
            }} break;
        case 5: // aqui o cálculo é ao contrário, o menor número vence.
            printf("A comparação de densidade populacional é:\n");
            printf("Carta 01 - Cidade1 (A01): Densidade populacional de %.2f.\n", densidade1);
            printf("Carta 02 - Cidade2 (B01): Densidade populacional de %.2f.\n", densidade2);
        if (densidade1 == densidade2) {
                printf("Empate, jogue novamente!\n");
            } else {
                if (densidade1 > densidade2) {
                    printf("Resultado: Carta 02 venceu.");
                    } else {
                    printf("Resultado: Carta 01 venceu.");
            }} break;
        case 6:
            printf("A comparação de PIB per Capta é:\n");
            printf("Carta 01 - Cidade1 (A01): PIB per Capta de %.2f.\n", pibpercapta1);
            printf("Carta 02 - Cidade2 (B01): PIB per Capta de %.2f.\n", pibpercapta2);
         if (pibpercapta1 == pibpercapta2) {
                printf("Empate, jogue novamente!\n");
            } else {
                if (pibpercapta1 > pibpercapta2) {
                    printf("Resultado: Carta 01 venceu.");
                    } else {
                    printf("Resultado: Carta 02 venceu.");
            }} break;
        default:
                printf("Opção inválida, reinicie o jogo.");
    }
    return 0;
}





















