#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    

        // Dados da carta 1

    char estado1; // Inicial do estado escolhido pelo usuário (ex: 'C' para Ceará).
    char codigoDaCarta1[10]; // Código da carta (ex: 'A01').
    char nomeDaCidade1[30]; // Nome da cidade (ex: 'Fortaleza').
    int populacao1; // População da cidade.
    float areaKm1; // Área da cidade em km².
    float pib1; // PIB da cidade em milhões de reais.
    int qtdPontosTuristicos1; // Quantidade de pontos turísticos na cidade.


        // Dados da carta 2
    
    char estado2;
    char codigoDaCarta2[10];
    char nomeDaCidade2[30];
    int populacao2;
    float areaKm2; // Área da cidade em km².
    float pib2;
    int qtdPontosTuristicos2;     

    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    printf("Digite os dados da carta 1 abaixo:\n");

    printf("Digite a inicial do estado:");
    scanf("%c", &estado1);

    printf("Digite o Código da carta (ex: A = inicial do estado 'A01, A02...'):");
    scanf("%s", &codigoDaCarta1);

    printf("Digite o nome da cidade:");
    scanf("%s", nomeDaCidade1);

    printf("Digite o número da população da cidade:");
    scanf("%d", &populacao1);

    printf("Digite o tamanho da área em Km² da cidade:");
    scanf("%f", &areaKm1);

    printf("Digite o PIB da cidade:");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos da cidade:");
    scanf("%d", &qtdPontosTuristicos1);
   
    // A leitura dos dados da carta 2

    printf("Digite os dados da carta 2 abaixo:\n");

    printf("Digite a inicial do estado:");
    scanf("%s", &estado2);

    printf("Digite o Código da carta (ex: A = inicial do estado 'A01, A02...'): ");
    scanf("%s", &codigoDaCarta2);

    printf("Digite o nome da cidade:");
    scanf("%s", nomeDaCidade2);

    printf("Digite o número da população da cidade:");
    scanf("%lu", &populacao2);

    printf("Digite o tamanho da área em Km² da cidade:");
    scanf("%f", &areaKm2);

    printf("Digite o PIB da cidade:");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos da cidade:");
    scanf("%d", &qtdPontosTuristicos2);
    




    

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
