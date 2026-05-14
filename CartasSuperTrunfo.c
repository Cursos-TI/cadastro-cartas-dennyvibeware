#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado;
  char codigo_da_carta[3] = "";
  char cidade[30] = "";
  int populacao, qtd_pontos_turisticos;
  float area, pib;
  populacao = qtd_pontos_turisticos = 0;
  area = pib = 0;


  // Área para entrada de dados
  printf("Dados da carta A \n");
  printf("----------------\n");
  printf("Digite o estado: \n");
  scanf("%c",&estado);
  printf("Digite o código da carta: \n");
  scanf("%s", codigo_da_carta);
  printf("Digite a cidade: \n");
  scanf("%s", cidade);
  printf("Digite a população da cidade: \n");
  scanf("%d",&populacao);
  printf("Digite a area(km2) da cidade: \n");
  scanf("%f",&area);
  printf("Digite o PIB da cidade: \n");
  scanf("%f",&pib);
  printf("Digite a quantidade de pontos turisticos: \n");
  scanf("%d",&qtd_pontos_turisticos);

  // Área para exibição dos dados da cidade
  printf("Carta 1: \n");
  printf("Estado: %c \n", estado);
  printf("Código: %s \n", codigo_da_carta);
  //printf("Nome da cidade: %s \n", cidade); 
  printf("População: %d \n", populacao);
  printf("Área: %.2f Km2 \n", area);
  printf("PIB: %.2f de reais\n", pib);
  printf("Numero de pontos turisticos: %d \n", qtd_pontos_turisticos);

return 0;
} 
