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
    float area2 = 693.80; //Km²
    float pib2 = 62.954; //Bilhoes de reais
    int pontosturisticos2 = 13;

    printf("########################## BENVINDO AO JOGO SUPERTRUNFO ###########################\n");
    printf("################################ DADOS DA 1ª CARTA ################################\n");
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

    printf("################################ DADOS DA 2ª CARTA ################################\n");
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

    //Declaração de variaveis da comparação de atributos.
    int primeiroAtributo;
    int segundoAtributo;
    int resultado1;
    int resultado2;

    //Menu interativo de escolha do primeiro atributo.
    printf("############################## DESAFIO SUPERTRUNFO ##############################\n");
    printf("############################# COMPARAÇÃO DAS CARTAS #############################\n");
    printf("\n");
    printf("Escolha o primeiro atributo de comparação:\n");
    printf("1. População.\n");
    printf("2. Área.\n");
    printf("3. PIB.\n");
    printf("4. Numero de pontos turísticos.\n");
    printf("5. Densidade demográfica.\n\n");
    printf("Escolha:");
    scanf("%d", &primeiroAtributo);
    printf("\n");

    // Criando as condições de comparação do primeiro atributo
    switch (primeiroAtributo)
    {
    case 1:
    printf("Você escolheu a opção população!\n");
    resultado1 = populacao1 > populacao2 ? 1 : 0;
    break;
        
    case 2:
    printf("Você escolheu a opção Àrea!\n");
    resultado1 = area1 > area2 ? 1 : 0;
    break;

    case 3:
    printf("Você escolheu a opção PIB!\n");
    resultado1 = pib1 > pib2 ? 1 : 0;
    break;
    
    case 4:
    printf("Você escolheu a opção Pontos Túristicos!\n");
    resultado1 = pontosturisticos1 > pontosturisticos2 ? 1 : 0;
    break;

    case 5:
    printf("Você escolheu a opção Densidade Populacional!\n");
    resultado1 = densidadepopulacional1 < densidadepopulacional2 ? 1 : 0;
    break;
    default:
    printf("\n");
    printf("Opção inválida\n");
    break;
    }

    //Menu interativo de escolha do segundo atributo.
    printf("\n");
    printf("Escolha um segundo atributo diferente de comparação:\n");
    printf("1. População.\n");
    printf("2. Área.\n");
    printf("3. PIB.\n");
    printf("4. Numero de pontos turísticos.\n");
    printf("5. Densidade demográfica.\n\n");
    printf("Escolha:");
    scanf("%d", &segundoAtributo);
    printf("\n");

    // Criando as condições de comparação do segundo atributo com uma condição para o jogador não escolher dois atributos iguais.
    if (primeiroAtributo != segundoAtributo)
    {
    switch (segundoAtributo){
    case 1:
    printf("\n");
    printf("Você escolheu a opção população!\n");
    resultado2 = populacao1 > populacao2 ? 1 : 0;
    break;
            
    case 2:
    printf("Você escolheu a opção Àrea!\n");
    resultado2 = area1 > area2 ? 1 : 0;
    break;
    
    case 3:
    printf("Você escolheu a opção PIB!\n");
    resultado2 = pib1 > pib2 ? 1 : 0;
    break;
        
    case 4:
    printf("Você escolheu a opção Pontos Túristicos!\n");
    resultado2 = pontosturisticos1 > pontosturisticos2 ? 1 : 0;
    break;
    
    case 5:
    printf("Você escolheu a opção Densidade Populacional!\n");
    resultado2 = densidadepopulacional1 < densidadepopulacional2 ? 1 : 0;
    break;
    default:
    printf("\n");
    printf("Opção inválida\n");
    break;
    }
    }else{
    printf("Você escoheu o mesmo atributo!\n");
    }

    printf("\n");
    printf("#################################### DECISÃO ####################################\n");
    printf("\n");

    // Saída de Dados. Exibindo os atributos comparados e o resultado do vencedor.
    switch (primeiroAtributo){
    case 1:
    printf("CIDADE:\n");
    printf("CARTA 1: %s - CARTA 2: %s\n", cidade1, cidade2);
    printf("POPULAÇÃO:\n");
    printf("CARTA 1: %d - CARTA 2: %d\n", populacao1, populacao2);
    break;
    case 2:
    printf("CIDADE:\n");
    printf("CARTA 1: %s - CARTA 2: %s\n", cidade1, cidade2);
    printf("ÁREA/ KM²:\n");
    printf("CARTA 1: %.2f - CARTA 2: %.2f\n", area1, area2);
    break;
    case 3:
    printf("CIDADE:\n");
    printf("CARTA 1: %s - CARTA 2: %s\n", cidade1, cidade2);
    printf("PIB:\n");
    printf("CARTA 1: %.2f bilhoes de reais - CARTA 2: %.2f bilhoes de reais\n", pib1, pib2);
    break;
    case 4:
    printf("CIDADE:\n");
    printf("CARTA 1: %s - CARTA 2: %s\n", cidade1, cidade2);
    printf("NÚMERO DE PONTOS TURÍSTICOS:\n");
    printf("CARTA 1: %d - CARTA 2: %d\n", pontosturisticos1, pontosturisticos2);
    break;
    case 5:
    printf("CIDADE:\n");
    printf("CARTA 1: %s - CARTA 2: %s\n", cidade1, cidade2);
    printf("DENSIDADE POPULACIONAL:\n");
    printf("CARTA 1: %.3f hab/km² - CARTA 2: %.3f hab/km²\n", densidadepopulacional1, densidadepopulacional2); 
    break;
    default:
    printf("Opção inválida! Tente Novamente.\n");
    break;
    }

    switch (segundoAtributo){
    case 1:
    printf("POPULAÇÃO:\n");
    printf("CARTA 1: %d - CARTA 2: %d\n", populacao1, populacao2);
    break;
    case 2:
    printf("ÁREA/ KM²:\n");
    printf("CARTA 1: %.2f - CARTA 2: %.2f\n", area1, area2);
    break;
    case 3:
    printf("PIB:\n");
    printf("CARTA 1: %.2f bilhoes de reais - CARTA 2: %.2f bilhoes de reais\n", pib1, pib2);
    break;
    case 4:
    printf("NÚMERO DE PONTOS TURÍSTICOS:\n");
    printf("CARTA 1: %d - CARTA 2: %d\n", pontosturisticos1, pontosturisticos2);
    break;
    case 5:
    printf("DENSIDADE POPULACIONAL:\n");
    printf("CARTA 1: %.2f hab/km² - CARTA 2: %.2f hab/km²\n", densidadepopulacional1, densidadepopulacional2); 
    break;
    default:
    printf("Opção inválida! Tente Novamente.\n");
    break;
    }
    printf("\n");
    if (resultado1 && resultado2)
    {
    printf("Carta 1 venceu!\n");
    }else if (resultado1 != resultado2)
    {
    printf("Empatou!\n");
    }else{
    printf("Carta 2 venceu!\n");
    }
    
    printf("\n");
    printf("################################## FIM DO JOGO ##################################\n");
    printf("############################## DESAFIO SUPERTRUNFO ##############################\n");
    printf("\n");

    return 0;
  }