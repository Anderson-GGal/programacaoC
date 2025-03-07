#include <stdio.h>

int main(){
    
    // declarando as variáveis das duas cartas 
    char estado1, estado2, codigo1[4], codigo2[4], nomeCidade1[50], nomeCidade2[50];
    int populacao1, populacao2, pontosTuristicos1, pontosTuristicos2;
    float area1, area2, pib1, pib2;
    float densidadePopulacional1, densidadePopulacional2, pibPerCapita1, pibPerCapita2;

    // solicitando os dados da primeira carta
    printf("A seguir, digite as informações da primeira carta.\n"
           "Nome do estado(A-H): \n");
    scanf("%c", &estado1);

    printf("Código (ex: A01): \n");
    scanf("%s", codigo1);

    printf("Nome da cidade: \n");
    scanf("%s", nomeCidade1);

    printf("População da cidade: \n");
    scanf("%d", &populacao1);

    printf("PIB da cidade(em bilhões de reais): \n");
    scanf("%f", &pib1);

    printf("Área da cidade(em km²): \n");
    scanf("%f", &area1);

    printf("Número de pontos turisticos da cidade: \n");
    scanf("%d", &pontosTuristicos1);

    //Cálculo da densidade populacional e do PIB per capita da primeira carta
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = pib1*1000000000 / populacao1;


    // solicitando os dados da segunda carta

    printf("\nAgora, digite as informações da segunda carta.\n"
           "Nome do estado(A-H): \n");
    getchar();  // Limpa o \n deixado no buffer
    scanf("%c", &estado2);

    printf("Código (ex: B02): \n");
    scanf("%s", codigo2);

    printf("Nome da cidade: \n");
    scanf("%s", nomeCidade2);

    printf("População da cidade: \n");
    scanf("%d", &populacao2);

    printf("PIB da cidade (em bilhoes de reais): \n");
    scanf("%f", &pib2);
    
    printf("Área da cidade(em km²): \n");
    scanf("%f", &area2);

    printf("Número de pontos turísticos da cidade: \n");
    scanf("%d", &pontosTuristicos2);

    //Cálculo da DP e PIB da segunda carta
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = pib2*1000000000 / populacao2;

    //Informações da primeira carta
    printf(
        "\nCarta 1\n"
        "Estado:                     %c\n"
        "Código:                     %s\n"
        "Nome da Cidade:             %s\n"
        "População:                  %d habitantes\n"
        "Área:                       %2.f km²\n"
        "PIB:                        %2.f bilhões de reais\n"
        "Número de Pontos Turísticos: %d\n"
        "Densidade Populacional: %2.f habitantes/km²\n"
        "PIB per Capita: %2.f de reais por habitante\n",
        estado1, codigo1, nomeCidade1, populacao1, area1, pib1, pontosTuristicos1, 
        densidadePopulacional1, pibPerCapita1
    );

    //Informações da segunda carta
    printf(
        "\nCarta 2\n"
        "Estado:                     %c\n"
        "Código:                     %s\n"
        "Nome da Cidade:             %s\n"
        "População:                  %d habitantes\n"
        "Área:                       %2.f km²\n"
        "PIB:                        %2.f bilhões de reais\n"
        "Número de Pontos Turísticos: %d\n"
        "Densidade Populacional: %2.f habitantes/km²\n"
        "PIB per Capita: %2.f reais por habitante\n",
        estado2, codigo2, nomeCidade2, populacao2, area2, pib2, pontosTuristicos2, 
        densidadePopulacional2, pibPerCapita2
    );
    //Atributo específico (população)
    printf("\nComparação de cartas (Atributo: População):\n");

    if (populacao1 > populacao2) {
        printf("Carta 1 (%s) venceu com %d de habitantes!\n", nomeCidade1, populacao1);
    } else if (populacao1 < populacao2) {
        printf("Carta 2 (%s) venceu com %d de habitantes\n", nomeCidade2, populacao2);
    } else {
        printf("As duas cartas possuem a mesma população de %d de habitantes\n", populacao1);
    }

    return 0;

} 