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
    scanf("%s" , &codigo1);
    printf ("Nome da cidade : ");
    scanf(" %[^\n]" , &cidade1);
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

  // Área para exibição dos dados da cidade

return 0;
} 
