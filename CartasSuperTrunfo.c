#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // >>>>> VAR. CARTA 1 <<<<<
    char estado1;
    char codigo1[4];
    char cidade1[40];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;

    // >>>>>VAR. CARTA 2 <<<<<
    char estado2;
    char codigo2[4];
    char cidade2[40];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;
  // Área para entrada de dados
  //>>>>> CADASTRO CARTA 1 <<<<<
    printf (">>> Cadastro Carta 1 <<< \n");
    printf ("Estado : ");
    scanf(" %c" , &estado1);
    printf ("Codigo : ");
    scanf(" %s" , codigo1);
    printf ("Nome da cidade : ");
    scanf(" %s" , cidade1);
    printf ("População : ");
    scanf("%d" , &populacao1);
    printf ("Area (km²) : ");
    scanf("%f" , &area1);
    printf ("PIB : ");
    scanf("%f" , &pib1);
    printf ("Numero depontos turisticos : ");
    scanf("%d" , &pontos1);

  //>>>>> CADASTRO CARTA 2 <<<<<
    printf (">>> Cadastro Carta 2 <<< \n");
    printf ("Estado : ");
    scanf(" %c" , &estado2);
    printf ("Codigo : ");
    scanf(" %s" , codigo2);
    printf ("Nome da cidade : ");
    scanf(" %s" , cidade2);
    printf ("População : ");
    scanf("%d" , &populacao2);
    printf ("Area (km²) : ");
    scanf("%f" , &area2);
    printf ("PIB : ");
    scanf("%f" , &pib2);
    printf ("Numero depontos turisticos : ");
    scanf("%d" , &pontos2);

  // Área para exibição dos dados da cidad
  //  SAÍDA 
  printf("\n\n>>>>> CARTAS CADASTRADAS <<<<\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos1);

   printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos2);

return 0;
} 
