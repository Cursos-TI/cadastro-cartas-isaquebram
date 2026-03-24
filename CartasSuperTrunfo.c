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
    unsigned long int populacao1;  // variaveis nível mestre
    float area1;
    float pib1;
    int pontos1;
    // variaveis nivel aventureiro 
    float densidade1;
    float pibpcapita1;
    // variaveis nível mestre
    float superPoder1;

    // >>>>>VAR. CARTA 2 <<<<<
    char estado2;
    char codigo2[4];
    char cidade2[40];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos2;
    int r;
    // variaveis nivel aventureiro 
    float densidade2;
    float pibpcapita2;

     // variaveis nível mestre
    float superPoder2;

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
    scanf("%lu" , &populacao1);
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
    scanf("%lu" , &populacao2);
    printf ("Area (km²) : ");
    scanf("%f" , &area2);
    printf ("PIB : ");
    scanf("%f" , &pib2);
    printf ("Numero depontos turisticos : ");
    scanf("%d" , &pontos2);

  // calculo Densidade Populaciona
  densidade1 = populacao1 / area1 ;
  densidade2 = populacao2 / area2 ;
  // calculo PIB per Capita
  pibpcapita1 = pib1 / populacao1 ;
  pibpcapita2 = pib2 / populacao2 ;
 // calculo Super Poder
  superPoder1 = (float)populacao1 + area1 + pib1 + pontos1 +
             pibpcapita1 + (1 / densidade1);
  superPoder2 = (float)populacao2 + area2 + pib2 + pontos2 +
             pibpcapita2 + (1 / densidade2);

  // Área para exibição dos dados da cidade
  //  SAÍDA 
  printf("\n\n>>>>> CARTAS CADASTRADAS <<<<\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %lu \n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibpcapita1);


   printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibpcapita2);

//  COMPARAÇÕES 
 printf("\n COMPARAÇÕES:\n");
// População
r = populacao1 > populacao2;
printf("\nCarta 1:\n");
printf("Populacao: [%d]\n", r );

// Área
r = area1 > area2;
printf("Area: [%d] \n", r );

// PIB
r = pib1 > pib2;
printf("PIB: [%d] \n", r);

// Pontos turísticos
r = pontos1 > pontos2;
printf("Pontos Turisticos: [%d]\n", r );

// Densidade (invertido!)
r = densidade1 < densidade2;
printf("Densidade Populacional: [%d] \n", r );

// PIB per capita
r = pibpcapita1 > pibpcapita2;
printf("PIB per Capita: [%d] \n", r );

// Super poder
r = superPoder1 >superPoder2;
printf("Super Poder: [%d] ", r );

return 0;
} 
