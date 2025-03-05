#include <stdio.h>

int main(){
    
    // declarando as variáveis das duas cartas 
    char estado1, estado2, codigo1[4], codigo2[4], nomeCidade1[50], nomeCidade2[50];
    int populacao1, populacao2, pontosTuristicos1, pontosTuristicos2;
    float area1, area2, pib1, pib2;

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

    //Informações da primeira carta
    printf(
        "\nCarta 1\n"
        "Estado:                     %c\n"
        "Código:                     %s\n"
        "Nome da Cidade:             %s\n"
        "População:                  %d habitantes\n"
        "Área:                       %2.f km²\n"
        "PIB:                        %2.f bilhões de reais\n"
        "Número de Pontos Turísticos: %d\n",
        estado1, codigo1, nomeCidade1, populacao1, area1, pib1, pontosTuristicos1
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
        "Número de Pontos Turísticos: %d\n",
        estado2, codigo2, nomeCidade2, populacao2, area2, pib2, pontosTuristicos2
    );

    return 0;

} 