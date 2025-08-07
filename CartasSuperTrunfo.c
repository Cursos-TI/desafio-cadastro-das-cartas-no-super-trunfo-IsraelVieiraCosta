#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    char estado1, estado2;
    char carta1, carta2;
    char cidade1, cidade2;
    int populacao1, populacao2, pontosturisticos1, pontosturisticos2;
    float pib1, pib2, area1, area2;

    printf("*********** Solicitando informações da Carta 1 **********\n");
    printf("Digite o Estado da 1° carta: \n");
    scanf(" %s", &estado1);

    printf("Digite a Cidade: \n");
    scanf(" %s", &cidade1);

    printf("Digite a População: \n");
    scanf(" %d", &populacao1);

    printf("Digite a Area: \n");
    scanf(" %f", &area1);

    printf("Digite a quantidade de pontos Turistícos: \n");
    scanf(" %d", &pontosturisticos1);

    printf("Digite o PIB: \n");
    scanf(" %f", &pib1);

    printf("*********** Solicitando informações da Carta 2 **********\n");
    printf("Digite o Estado da 2° carta: \n");
    scanf(" %s", &estado2);

    printf("Digite a Cidade: \n");
    scanf(" %s", &cidade2);

    printf("Digite a População: \n");
    scanf(" %d", &populacao2);

    printf("Digite a Area: \n");
    scanf(" %f", &area2);

    printf("Digite a quantidade de pontos Turistícos: \n");
    scanf(" %d", &pontosturisticos2);

    printf("Digite o PIB: \n");
    scanf(" %f", &pib2);

    printf("*********** Carta 1 **********\n");
    printf("Estado: %c\n", estado1);
    printf("Carta: %c\n", estado1, cidade1);
    printf("Cidade: %c\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Area: %f\n", area1);
    printf("Pontos Turisticos: %d\n", pontosturisticos1);
    printf("PIB: %f\n", pib1);

    printf("*********** Carta 2 **********\n");
    printf("Estado: %c\n", estado2);
    printf("Carta: %c\n", estado2, cidade2);
    printf("Cidade: %c\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Area: %f\n", area2);
    printf("Pontos Turisticos: %d\n", pontosturisticos2);
    printf("PIB: %f\n", pib2);

    return 0;
}
