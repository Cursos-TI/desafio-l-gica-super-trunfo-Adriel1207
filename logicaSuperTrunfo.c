#include <stdio.h>

int main(){
    //Declaração de variaveis da carta 1.

    char estado1[20] ="Amazonas";
    char codigo1[4] = "A01";
    char cidade1[20] = "Manaus(AM)";
    int populacao1 = 2676.93; //Milhoes
    float area1 = 11.401; //km²
    float pib1 = 103.281; //Bilhoes de reais
    int pontosturisticos1 = 18;
    
    //Declaração de variaveis da carta 2.
    char estado2[20] ="Bahia";
    char codigo2[4] = "B02";
    char cidade2[20] = "Salvador(BA)";
    int populacao2 = 2418.00; //Milhoes
    float area2 = 693.8; //Km²
    float pib2 = 62.954; //Bilhoes de reais
    int pontosturisticos2 = 13;

    //Entrada de dados da carta 1.
    printf("Carta1:\n");
    printf("Digite o Estado:\n");
    scanf("%s", &estado1);
    printf("Digite o codigo da carta:\n");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade1);
    setbuf(stdin,NULL); //Limpando buffer
    setbuf(stdin,NULL); //Limpando buffer
    printf("Digite o numero de habitantes:\n");
    scanf("%i", &populacao1);   
    printf("Digite a area da cidade em quilometros quadrados:\n");
    scanf("%f", &area1);    
    printf("Digite o PIB da Cidade:\n");
    scanf("%f", &pib1);
    printf("Digite a quantidade de pontos turisticos:\n");
    scanf("%d", &pontosturisticos1);
    printf(" \n");

    //Entrada de dados da carta 2.
    printf("Carta2:\n");
    printf("Digite o Estado:\n");
    scanf("%s", &estado2);
    printf("Digite o codigo da carta:\n");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade2);
    setbuf(stdin,NULL); //Limpando buffer
    setbuf(stdin,NULL); //Limpando buffer
    printf("Digite o numero de habitantes:\n");
    scanf("%i", &populacao2);
    printf("Digite a area da cidade em quilometros quadrados:\n");
    scanf("%f", &area2);
    printf("Digite o PIB da Cidade:\n");
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos turisticos:\n");
    scanf("%d", &pontosturisticos2);
    printf(" \n");

    //Declaração de variaveis carta1; Densidade, Pib Per Capita e Super Poder.
    double densidadepopulacional1 = (double)populacao1 / area1;
    double pibpercapita1 = (double)pib1 / populacao1;
    double superpoder1 = (double)populacao1 + area1 + pib1 + pontosturisticos1 + pibpercapita1 + (1/densidadepopulacional1);

    //Declaração de variaveis carta2; Densidade, Pib Per Capita e Super Poder.
    double densidadepopulacional2 = (double)populacao2 / area2;
    double pibpercapita2 = (double)pib2 / populacao2;
    double superpoder2 = (double)populacao2 + area2 + pib2 + pontosturisticos2 + pibpercapita2 + (1/densidadepopulacional2);

    //Saida de dados da carta 1.
    printf("Carta1:\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nomde da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Area: %.2f Km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Número de Pontos Turisticos: %d\n", pontosturisticos1);
    printf("Densidade populacional: %.3f hab/km²\n", densidadepopulacional1);
    printf("PIB per capita: %.3f reais\n", pibpercapita1);
    printf("Super Poder: %.2f\n\n", superpoder1);
    
    //Saida de dados da carta 2.
    printf("Carta2:\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nomde da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Area: %.2f Km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Número de Pontos Turisticos: %d\n", pontosturisticos2);
    printf("Densidade populacional: %.3f hab/km²\n", densidadepopulacional2);
    printf("PIB per capita: %.3f reais\n", pibpercapita2);
    printf("Super Poder: %.2f\n\n", superpoder2);

    int escolhajogador;

    //Menu interativo
    printf("###Comparação de cartas###\n\n");
    printf("Escolha o atributo de comparação:\n");
    printf("1. População.\n");
    printf("2. Área.\n");
    printf("3. PIB.\n");
    printf("4. Numero de pontos turísticos.\n");
    printf("5. Densidade demográfica.\n\n");
    printf("Escolha:");
    scanf("%d", &escolhajogador);

    switch (escolhajogador)
    {
    case 1:
    if (populacao1 > populacao2){
        printf("\n");
        printf("Carta 1 %s\n", estado1);
        printf("Carta 2 %s\n", estado2);
        printf("População:\n");
        printf("Carta 1: %d habitantes\n", populacao1);
        printf("Carta 2: %d habitantes\n", populacao2);
        printf("###Carta 1 venceu!###\n");
    }else if (populacao1 < populacao2){
        printf("\n");
        printf("Carta 1 %s\n", estado1);
        printf("Carta 2 %s\n", estado2);
        printf("População:\n");
        printf("Carta 1: %d habitantes\n", populacao1);
        printf("Carta 2: %d habitantes\n", populacao2);
        printf("###Carta 2 venceu!###\n");
    }else{
        printf("Carta 1 %s\n", estado1);
        printf("Carta 2 %s\n", estado2);
        printf("População:\n");
        printf("Carta 1: %d habitantes\n", populacao1);
        printf("Carta 2: %d habitantes\n", populacao2);
        printf("Empate!\n");
    }
    break;
        
    case 2:
    if (area1 > area2){
        printf("\n");
        printf("\nCarta 1 %s\n", estado1);
        printf("Carta 2 %s\n", estado2);
        printf("Área:\n");
        printf("Carta 1: %.2f Km²\n", area1);
        printf("Carta 2: %.2f Km²\n", area2);
        printf("###Carta 1 venceu!###\n");
    }else if (area1 < area2){
        printf("\n");
        printf("Carta 1 %s\n", estado1);
        printf("Carta 2 %s\n", estado2);
        printf("Área:\n");
        printf("Carta 1: %.2f Km²\n", area1);
        printf("Carta 2: %.2f Km²\n", area2);
        printf("###Carta 2 venceu!###\n");
    }else{
        printf("\n");
        printf("Carta 1 %s\n", estado1);
        printf("Carta 2 %s\n", estado2);
        printf("Área:\n");
        printf("Carta 1: %.2f Km²\n", area1);
        printf("Carta 2: %.2f Km²\n", area2);
        printf("Empate!\n");
    }
        break;

    case 3:
        if (pib1 > pib2){
        printf("\n");
        printf("Carta 1 %s\n", estado1);
        printf("Carta 2 %s\n", estado2);
        printf("PIB:\n");
        printf("Carta 1: %.2f bilhoes de reais\n", pib1);
        printf("Carta 2: %.2f bilhoes de reais\n", pib2);
        printf("###Carta 1 venceu!###\n");
    }else if (pib1 < pib2){
        printf("\n");
        printf("Carta 1 %s\n", estado1);
        printf("Carta 2 %s\n", estado2);
        printf("PIB:\n");
        printf("Carta 1: %.2f Km²\n", pib1);
        printf("Carta 2: %.2f Km²\n", pib2);
        printf("###Carta 2 venceu!###\n");
    }else{
        printf("\n");
        printf("Carta 1 %s\n", estado1);
        printf("Carta 2 %s\n", estado2);
        printf("PIB:\n");
        printf("Carta 1: %.2f Km²\n", pib1);
        printf("Carta 2: %.2f Km²\n", pib2);
        printf("Empate!\n");
    }
        break;
    
    case 4:
        if (pontosturisticos1 > pontosturisticos2){
        printf("\n");
        printf("Carta 1 %s\n", estado1);
        printf("Carta 2 %s\n", estado2);
        printf("Numero de Pontos Túristicos:\n");
        printf("Carta 1: %d\n", pontosturisticos1);
        printf("Carta 2: %d\n", pontosturisticos2);
        printf("###Carta 1 venceu!###\n");
    }else if (pontosturisticos1 < pontosturisticos2){
        printf("\n");
        printf("Carta 1 %s\n", estado1);
        printf("Carta 2 %s\n", estado2);
        printf("Numero de Pontos Túristicos:\n");
        printf("Carta 1: %d\n", pontosturisticos1);
        printf("Carta 2: %d\n", pontosturisticos2);
        printf("###Carta 2 venceu!###");
    }else{
        printf("\n");
        printf("Carta 1 %s\n", estado1);
        printf("Carta 2 %s\n", estado2);
        printf("Numero de Pontos Túristicos:\n");
        printf("Carta 1: %d\n", pontosturisticos1);
        printf("Carta 2: %d\n", pontosturisticos2);
        printf("Empate!");
    }
        break;

    case 5:
        if (densidadepopulacional1 < densidadepopulacional2){
        printf("\n");
        printf("Carta 1 %s\n", estado1);
        printf("Carta 2 %s\n", estado2);
        printf("Densidade Demográfica:\n");
        printf("Carta 1: %.3f hab/km²\n", densidadepopulacional1);
        printf("Carta 2: %.3f hab/km²\n", densidadepopulacional2);
        printf("###Carta 1 venceu!###\n");
    }else if (densidadepopulacional1 > densidadepopulacional2){
        printf("\n");
        printf("Carta 1 %s\n", estado1);
        printf("Carta 2 %s\n", estado2);
        printf("Densidade Demográfica:\n");
        printf("Carta 1: %.3f hab/km²\n", densidadepopulacional1);
        printf("Carta 2: %.3f hab/km²\n", densidadepopulacional2);
        printf("###Carta 2 venceu!###");
    }else{
        printf("\n");
        printf("Carta 1 %s\n", estado1);
        printf("Carta 2 %s\n", estado2);
        printf("Densidade Demográfica:\n");
        printf("Carta 1: %.3f hab/km²\n", densidadepopulacional1);
        printf("Carta 2: %.3f hab/km²\n", densidadepopulacional2);
        printf("Empate!");
    }
        break;
    default:
        printf("\n");
        printf("Opção inválida\n");
        break;
    } 
    return 0;
  }