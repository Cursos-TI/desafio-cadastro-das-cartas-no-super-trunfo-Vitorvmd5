#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado1;
    char codigo1[3];
    char cidade1[30];
    int populacao1;
    float area1;
    float pib1;
    int pontostur1;

    printf("Carta 1 \n");
    printf("Insira uma letra para o estado: ");
    scanf("%c", &estado1);
    
    printf("Insira um código para a carta: ");
    scanf("%s", &codigo1);

    printf("Insira uma cidade: ");
    scanf("%s", &cidade1);

    printf("Insira a população: ");
    scanf("%d", &populacao1);

    printf("Insira a área: ");
    scanf("%f", &area1);

    printf("Insira o PIB: ");
    scanf("%f", &pib1);

    printf("Insira a quantidade de pontos turísticos: ");
    scanf("%d", &pontostur1);

    char estado2;
    char codigo2[3];
    char cidade2[30];
    int populacao2;
    float area2;
    float pib2;
    int pontostur2;

    printf("Carta 2 \n");
    printf("Insira uma letra para o estado: ");
    scanf("%c", &estado2);
    
    printf("Insira um código para a carta: ");
    scanf("%s", &codigo2);

    printf("Insira uma cidade: ");
    scanf("%s", &cidade2);

    printf("Insira a população: ");
    scanf("%d", &populacao2);

    printf("Insira a área: ");
    scanf("%f", &area2);

    printf("Insira o PIB: ");
    scanf("%f", &pib2);

    printf("Insira a quantidade de pontos turísticos: ");
    scanf("%d", &pontostur2);

    printf("Carta 1 \n Estado: %c \n Código: %s \n Cidade: %s \n População: %d \n Área: %f km^2 \n PIB: %f bilhões de reais \n Número de pontos turísticos: %d \n", estado1, codigo1, cidade1, populacao1, area1, pib1, pontostur1);
    printf("Carta 2 \n Estado: %c \n Código: %s \n Cidade: %s \n População: %d \n Área: %f km^2 \n PIB: %f bilhões de reais \n Número de pontos turísticos: %d \n", estado2, codigo2, cidade2, populacao2, area2, pib2, pontostur2);

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
