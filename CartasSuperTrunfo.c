#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado, estado2 = "";
  /* a variavel codigo_da_carta precisa ter tamanho 4 
   - 3 digitos do codigo da carta + \0 
   - O \0 é o caractere nulo (null terminator) usado pela linguagem C para indicar o fim de uma string
   - se o tamanho do codigo_da_carta for 3, apos digitar o codigo A01 e dar um enter 
     ira causar um estouro de buffer na memória (buffer overflow)
  */
  char codigo_da_carta[4], codigo_da_carta2[4]=""; 
  char cidade[30], cidade2[30]="";
  int populacao, populacao2, qtd_pontos_turisticos, qtd_pontos_turisticos2 = 0;
  float area, area2, pib, pib2 = 0;


  // Entrada de dados da carta 1 
  printf("### Dados da carta 1 ###\n");
  printf("========================\n");
  printf("Digite o estado (A-H): \n");
  scanf(" %c",&estado);
  printf("Digite o código da carta (ex: A01, B03): \n");
  scanf("%s", codigo_da_carta);
  printf("Digite o nome da cidade (apenas um nome): \n");
  scanf("%s", cidade);
  printf("Digite a população da cidade (ex: 10000): \n");
  scanf("%d",&populacao);
  printf("Digite a area(km2) da cidade (ex: 218, 218.00): \n");
  scanf("%f",&area);
  printf("Digite o PIB da cidade (ex: 15000, 15000.50): \n");
  scanf("%f",&pib);
  printf("Digite a quantidade de pontos turisticos: \n");
  scanf("%d",&qtd_pontos_turisticos);
  
  // Entrada de dados da carta 2
  printf("\n### Dados da carta 2 ###\n");
  printf("========================\n");
  printf("Digite o estado (A-H): \n");
  scanf(" %c",&estado2); // colocar espaço antes do especificador de dados para nao ler o enter anterior
  printf("Digite o código da carta (ex: A01, B03): \n");
  scanf("%s", codigo_da_carta2);
  printf("Digite o nome da cidade (apenas um nome): \n");
  scanf("%s", cidade2);
  printf("Digite a população da cidade (ex: 10000): \n");
  scanf("%d",&populacao2);
  printf("Digite a area(km2) da cidade (ex: 218, 218.00): \n");
  scanf("%f",&area2);
  printf("Digite o PIB da cidade (ex: 15000, 15000.50): \n");
  scanf("%f",&pib2);
  printf("Digite a quantidade de pontos turisticos: \n");
  scanf("%d",&qtd_pontos_turisticos2);

  // exibição dos dados da cartas 1
  printf("\n==========================================================\n");
  printf("\nCarta 1: \n");
  printf("Estado: %c \n", estado);
  printf("Código: %s \n", codigo_da_carta);
  printf("Nome da cidade: %s \n", cidade); 
  printf("População: %d \n", populacao);
  printf("Área: %.2f Km2 \n", area);
  printf("PIB: %.2f Reais\n", pib);
  printf("Numero de pontos turisticos: %d \n", qtd_pontos_turisticos);
  // exibição dos dados da cartas 2
  printf("\nCarta 2: \n");
  printf("Estado: %c \n", estado2);
  printf("Código: %s \n", codigo_da_carta2);
  printf("Nome da cidade: %s \n", cidade2); 
  printf("População: %d \n", populacao2);
  printf("Área: %.2f Km2 \n", area2);
  printf("PIB: %.2f Reais\n", pib2);
  printf("Numero de pontos turisticos: %d \n\n", qtd_pontos_turisticos2);

return 0;
} 
