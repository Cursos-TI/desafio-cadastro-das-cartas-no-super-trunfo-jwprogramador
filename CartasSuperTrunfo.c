#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    int codigo_da_cidade;
    char nome[50];
    int populacao;
    float area;
    int pontos_turisticos;
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Digite o codigo da cidade: \n");
    scanf("%d", &codigo_da_cidade);
    
    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome);

    printf("Digite o numero de habitante da cidade: \n");
    scanf("%d", &populacao);

    printf("Digite o numero de pontos turisticos da cidade: \n");
    scanf("%d", &pontos_turisticos);

    printf("Digite a area total da cidade: \n");
    scanf("%f", &area);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Nome da cidade: %s \n", nome);
    printf("Codigo da cidade: %d \n", codigo_da_cidade);
    printf("População: %d \n", populacao);
    printf("Area: %f \n", area);
    printf("Pontos turisticos: %d \n", pontos_turisticos);

    return 0;
}
