#include <stdio.h>

int main(){

    //Definindo a estrutura da primeira carta

    char estado;
    char codigo[5]; // Exemplo: "A01", "B02"
    char nomecidade[50];
    int populacao;
    float area, pib, densidade, capita;
    int pontosturisticos;

    // Dado da Carta 1

    printf("Digite o Estado 1 (A-H): ");
    scanf(" %c", &estado);

    printf("Digite o código da Carta 1 (Ex: A01, B02): ");
    scanf("%s", codigo);

    printf("Digite o nome da Cidade 1: ");
    scanf(" %[^\n]", nomecidade);

    printf("Digite a população 1 : ");
    scanf("%d", &populacao);

    printf("Digite a área (km²) 1: ");
    scanf("%f", &area);

    printf("Digite o PIB 1 (em bilhões de reais): ");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos 1: ");
    scanf("%d", &pontosturisticos);

    densidade = (float)populacao / area; // Cálculo da Densidade populacional
    capita = (pib * 1e9) / populacao; // Converte PIB para reais e divide pela população

    // Exibição da Carta 1

    printf("\n----- Carta -----\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", nomecidade);
    printf("População: %d Habitantes\n",populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f Bilhões de reais\n", pib);
    printf("Pontos Turísticos: %d\n", pontosturisticos);
    printf ("Densidade Populacional: %.2f hab/km² \n",densidade);
    printf("PIB per Capita: R$ %.2f\n",capita);
    printf("-----------------\n");

    //Definindo a estrutura da Segunda carta

  
    char estado_1;
    char codigo_1[5]; // Exemplo: "A01", "B02"
    char nomecidade_1[50];
    int populacao_1;
    float area_1, pib_1, densidade_1, capita_1;
    int pontosturisticos_1;

    // Dados da Carta 2
    printf("Digite o Estado 2 (A-H): ");
    scanf(" %c", &estado_1); 
    
    printf("Digite o código da Carta 2 (Ex: A01, B02): ");
    scanf("%s", codigo_1);

    printf("Digite o nome da Cidade 2: ");
    scanf(" %[^\n]", nomecidade_1); 
    
    printf("Digite a população 2: ");
    scanf("%d", &populacao_1);
    
    printf("Digite a área (km²) 2: ");
    scanf("%f", &area_1);
    
    printf("Digite o PIB 2 (em bilhões de reais): ");
    scanf("%f", &pib_1);
    
    printf("Digite o número de pontos turísticos 2: ");
    scanf("%d", &pontosturisticos_1);
    

    densidade_1 = (float)populacao_1 / area_1; // Cálculo da Densidade populacional
    capita_1 = (pib_1 * 1e9) / populacao_1; // Converte PIB para reais e divide pela população

    // Exibição da Carta 2

    printf("\n----- Carta 2 -----\n");
    printf("Estado: %c\n", estado_1);
    printf("Código: %s\n", codigo_1);
    printf("Cidade: %s\n", nomecidade_1);
    printf("População: %d Habitantes\n", populacao_1);
    printf("Área: %.2f km²\n", area_1);
    printf("PIB: %.2f Bilhões de reais\n", pib_1);
    printf("Pontos Turísticos: %d\n", pontosturisticos_1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_1);
    printf("PIB per Capita: R$ %.2f\n", capita_1);
    printf("-------------------\n");

    return 0;
}