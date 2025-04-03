#include <stdio.h>

// Desafio Super Trunfo 
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    

        // Dados da carta 1

    char estado1; // Inicial do estado escolhido pelo usuário (ex: 'C' para Ceará).
    char codigoDaCarta1[10]; // Código da carta (ex: 'A01').
    char nomeDaCidade1[30]; // Nome da cidade (ex: 'Fortaleza').
    int populacao1; // População da cidade.
    float areaKm1; // Área da cidade em km².
    float pib1; // PIB da cidade em milhões de reais.
    int qtdPontosTuristicos1; // Quantidade de pontos turísticos na cidade.

    float densidadePopulacional1; //Aqui sera Divida a população da cidade pela sua área.
    float pibPerCapital1;//Aqui sera Divida o PIB da cidade pela sua população.


        // Dados da carta 2
    
    char estado2;
    char codigoDaCarta2[10];
    char nomeDaCidade2[30];
    int populacao2;
    float areaKm2; 
    float pib2;
    int qtdPontosTuristicos2;     

    float densidadePopulacional2; 
    float pibPerCapital2;

    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // (Repita para cada propriedade);

    printf("\n\nDigite os dados da carta 1 abaixo:\n");

    printf("Digite a inicial do estado:");
    scanf("%c", &estado1);

    printf("Digite o Código da carta (ex: A = inicial do estado 'A01, A02...'):");
    scanf("%s", codigoDaCarta1);

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

    printf("\n\nDigite os dados da carta 2 abaixo:\n");

    printf("Digite a inicial do estado:");
    scanf(" %c", &estado2);

    printf("Digite o Código da carta (ex: A = inicial do estado 'A01, A02...'): ");
    scanf("%s", codigoDaCarta2);

    printf("Digite o nome da cidade:");
    scanf("%s", nomeDaCidade2);

    printf("Digite o número da população da cidade:");
    scanf("%d", &populacao2);

    printf("Digite o tamanho da área em Km² da cidade:");
    scanf("%f", &areaKm2);

    printf("Digite o PIB da cidade:");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos da cidade:");
    scanf("%d", &qtdPontosTuristicos2);

            //calculo da densidade e pib percapta
    
//carta 1
densidadePopulacional1 = (float) populacao1 / areaKm1 ;
pibPerCapital1 = (float) pib1 / populacao1;


//carta 2
densidadePopulacional2 = (float) populacao2 / areaKm2 ;
pibPerCapital2 = (float) pib2 / populacao2;

            //exibição das cartas

    printf("\n\nLogo abaixo terá as descrições das cartas: \n\n");

    printf("Carta 1: \n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigoDaCarta1);
    printf("Nome da Cidade: %s\n", nomeDaCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", areaKm1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", qtdPontosTuristicos1);
    printf("Densidade Populacional: %.2f\n",densidadePopulacional1);
    printf("PIB per Capital: %.2f\n", pibPerCapital1);


    printf("\n\nCarta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigoDaCarta2);
    printf("Nome da Cidade: %s\n", nomeDaCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", areaKm2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", qtdPontosTuristicos2);
    printf("Densidade Populacional: %.2f\n",densidadePopulacional2);
    printf("PIB per Capital: %.2f\n\n\n", pibPerCapital2);    

    

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

    printf("\nComparação de cartas (Atributo: População):\n\n");
printf("Carta 1 - %s (%c): %d\n", nomeDaCidade1, estado1, populacao1);
printf("Carta 2 - %s (%c): %d\n", nomeDaCidade2, estado2, populacao2);



    if(populacao1 > populacao2) { 
        printf("\nResultado: Carta 1 (%s) venceu!\n", nomeDaCidade1); 
    } else { 
        printf("\nResultado: Carta 2 (%s) venceu!\n", nomeDaCidade2); 
    }
    

    

    return 0;
}
