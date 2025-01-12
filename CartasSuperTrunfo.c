#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Atributos: população, Àrea, PIB e Numero de pontos turisticos
    int populacao;
    int pontos_turisticos;
    float area;
    float PIB;
    
   // criando as variaveis do desafio 2 - Densidade populacional e PIB per capita
    float densidade_populacional;
    float PIB_per_capita;
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("Digite o numero de habitante da cidade: \n");
    scanf("%d", &populacao);

    printf("Digite o numero de pontos turisticos da cidade: \n");
    scanf("%d", &pontos_turisticos);

    printf("Digite a area total da cidade: \n");
    scanf("%f", &area);

     printf("Digite o PIB da cidade: \n");
    scanf("%f", &PIB);

    // Cauculos matematicos segundo desafio
    densidade_populacional = populacao / area;

    PIB_per_capita = PIB / populacao;

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("População: %d \n", populacao);
    printf("Pontos turisticos: %d \n", pontos_turisticos);
    printf("Area: %f \n", area);
    printf("PIB: %f \n", PIB);
    
    // impressão do PIB per capita e densidade populacional
    printf("Densidade populacional: %f \n", densidade_populacional);
    printf("PIB per Capita: %f \n", PIB_per_capita);


    return 0;
}
