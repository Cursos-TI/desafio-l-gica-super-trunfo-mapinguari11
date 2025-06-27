#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Estou aproveitando o código do primeiro desafio
    //Estado da Cidade, de A a H
    char estado_1, estado_2;
    //Código da carta, letra do estado + número entre 01 a 04
    char cod_carta_1[4], cod_carta_2[4]; //[4] porque são 3 caracteres mais o enter
    //Nome da Cidade
    char nome_cidade_1[50], nome_cidade_2[50];
    //População
    int populacao_1, populacao_2;
    //Área em km²
    float area_1, area_2;
    //Densidade populacional
    float dens_pop_1, dens_pop_2;
    //PIB
    float pib_1, pib_2;
    //PIB per capita
    float pib_per_capita_1, pib_per_capita_2;
    //Número de pontos turísticos
    int num_pontos_turisticos_1, num_pontos_turisticos_2;
    double super_poder_1, super_poder_2;
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // Estou utilizando o código do primeiro desafio

    /*
    //Cartas para testes
    //Carta 1
    char cod_carta_1[4] = "A01";
    char nome_cidade_1[50] = "SaoPaulo";
    int populacao_1 = 12325000;
    float area_1 = 1521.11;
    float pib_1 = 699.28;
    int num_pontos_turisticos_1 = 50;
    float dens_pop_1 = (float) populacao_1 / area_1;
    pib_1 *= 1000000000; //Conversão para bilhões, para cálculo per capita
    float pib_per_capita_1 = pib_1 / (float) populacao_1;
    double super_poder_1 = (float)populacao_1 + area_1 + (pib_1/1000000000) + num_pontos_turisticos_1 + pib_per_capita_1 + (1/dens_pop_1); //divisão de pib por 1000000000 para voltar ao valor original de pib_1

    //Carta 2
    char cod_carta_2[4] = "B02";
    char nome_cidade_2[50] = "RiodeJaneiro";
    int populacao_2 = 6748000;
    float area_2 = 1200.25;
    float pib_2 = 300.5;
    int num_pontos_turisticos_2 = 30;
    float dens_pop_2 = (float) populacao_2 / area_2;
    pib_2 *= 1000000000; //Conversão para bilhões, para cálculo per capita
    float pib_per_capita_2 = pib_2 / (float) populacao_2;
    double super_poder_2 = (float)populacao_2 + area_2 + (pib_2/1000000000) + num_pontos_turisticos_2 + pib_per_capita_2 + (1/dens_pop_2);
*/
    // Cadastro das Cartas:
    //Registrando primeira carta
    printf("REGISTRAR PRIMEIRA CARTA: \n");
    printf("Digite uma letra entre A e H, para representar o estado da cidade: ");
    scanf(" %c", &estado_1); //espaço para garantir que vai ler o caractere
    printf("Digite o código da carta. Ele deve começar com a letra registrada na etapa anterior, seguida de um número entre 01 e 04: ");
    scanf("%s", cod_carta_1);
    printf("Digite o nome da cidade. Use _ no lugar de espaços caso necessário (ex: \"São_Paulo\" em vez de \"São Paulo\"): ");
    scanf("%s", nome_cidade_1);
    printf("Digite a população da cidade. Não use pontos, vírgulas nem palavras (ex: \"1400000\" e não \"1.400.000\" ou \"1,4 milhão\"): )");
    scanf("%d", &populacao_1);
    printf("Digite a área em km². Indique apenas os números (ex: \"1200.25\" e não \"1200.25 km²\"): ");
    scanf("%f", &area_1);
    printf("Digite o PIB da cidade, em bilhões de reais. Indique apenas os números (ex: \"300.50\" e não \"R$300.50 bi\"): ");
    scanf("%f", &pib_1);
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &num_pontos_turisticos_1);

    //Registrando segunda carta
    printf("\n"); //para pular uma linha entre o registro da primeira e da segunda carta 
    printf("REGISTRAR SEGUNDA CARTA: \n");
    printf("Digite uma letra entre A e H, para representar o estado da cidade: ");
    scanf(" %c", &estado_2); //espaço para garantir que vai ler o caractere
    printf("Digite o código da carta. Ele deve começar com a letra registrada na etapa anterior, seguida de um número entre 01 e 04: ");
    scanf("%s", cod_carta_2);
    printf("Digite o nome da cidade. Use _ no lugar de espaços caso necessário (ex: \"São_Paulo\" em vez de \"São Paulo\"): ");
    scanf("%s", nome_cidade_2);
    printf("Digite a população da cidade. Não use pontos, vírgulas nem palavras (ex: \"1400000\" e não \"1.400.000\" ou \"1,4 milhão\"): )");
    scanf("%d", &populacao_2);
    printf("Digite a área em km². Indique apenas os números (ex: \"1200.25\" e não \"1200.25 km²\"): ");
    scanf("%f", &area_2);
    printf("Digite o PIB da cidade, em bilhões de reais. Indique apenas os números (ex: \"300.50\" e não \"R$300.50 bi\"): ");
    scanf("%f", &pib_2);
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &num_pontos_turisticos_2);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    //Exibindo primeira carta
    printf("\n"); //Para pular uma linha entre os registros de cartas e exibição das cartas
    printf("PRIMEIRA CARTA\n");
    printf("Estado: %c\n", estado_1);
    printf("Código da carta: %s\n", cod_carta_1);
    printf("Nome da cidade: %s\n", nome_cidade_1);
    printf("População: %d\n", populacao_1);
    printf("Área: %.2f km²\n", area_1); //%.2f para limitar em 2 casas após a vírgula
    printf("PIB: R$ %.2f bilhões\n", pib_1);
    printf("Nº. de pontos turísticos: %d\n", num_pontos_turisticos_1);
    //Cálculo de densidade populacional e pib per capita. Casting em populacao_1 para conversão explícita de inteiro em float
    dens_pop_1 = (float) populacao_1 / area_1;
    pib_1 *= 1000000000; //Conversão para bilhões, para cálculo per capita
    pib_per_capita_1 = pib_1 / (float) populacao_1;
    printf("Densidade Populacional: %.2f hab/km²\n", dens_pop_1);
    printf("PIB per Capita: R$ %.2f\n", pib_per_capita_1);
    //Cálculo do Super Poder
    super_poder_1 = (float)populacao_1 + area_1 + (pib_1/1000000000) + num_pontos_turisticos_1 + pib_per_capita_1 + (1/dens_pop_1); //divisão de pib por 1000000000 para voltar ao valor original de pib_1
    printf("Super Poder: %.2f\n", super_poder_1);

    //Exibindo segunda carta
    printf("\n"); //Para pular uma linha entre primeira e segunda carta
    printf("SEGUNDA CARTA\n");
    printf("Estado: %c\n", estado_2);
    printf("Código da carta: %s\n", cod_carta_2);
    printf("Nome da cidade: %s\n", nome_cidade_2);
    printf("População: %d\n", populacao_2);
    printf("Área: %.2f km²\n", area_2); //%.2f para limitar em 2 casas após a vírgula
    printf("PIB: R$ %.2f bilhões\n", pib_2);
    printf("Nº. de pontos turísticos: %d\n", num_pontos_turisticos_2);
    
    //Cálculo de densidade populacional e pib per capita. Casting em populacao_2 para conversão explícita de inteiro em float
    dens_pop_2 = (float) populacao_2 / area_2;
    pib_2 *= 1000000000; //Conversão para bilhões, para cálculo per capita
    pib_per_capita_2 = pib_2 / (float) populacao_2;
    
    printf("Densidade Populacional: %.2f hab/km²\n", dens_pop_2);
    printf("PIB per Capita: R$ %.2f\n", pib_per_capita_2);

    //Cálculo do Super Poder
    super_poder_2 = (float)populacao_2 + area_2 + (pib_2/1000000000) + num_pontos_turisticos_2 + pib_per_capita_2 + (1/dens_pop_2);
    printf("Super Poder: %.2f\n", super_poder_2); //divisão de pib por 1000000000 para voltar ao valor original de pib_2

    // Menu de comparação
    int atributo; //variável para escolha do atributo a ser comparado
    printf("***Escolha o atributo para comparar***\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    printf("6 - PIB per capita\n");
    printf("7 - Super poder\n");
    printf("Comparar: ");
    scanf("%d", &atributo);

    switch (atributo)
    {
    case 1:
        printf("### POPULAÇÃO ###\n");
        printf(" %s - %d\n", nome_cidade_1, populacao_1);
        printf(" %s - %d\n", nome_cidade_2, populacao_2);
        if (populacao_1 > populacao_2) {
            printf("A carta %s ganhou!\n", nome_cidade_1);
        } else if (populacao_1 < populacao_2) {
            printf("A carta %s ganhou\n", nome_cidade_2);
        } else {
            printf("Empate!\n");
        }
        break;
    case 2:
        printf("### ÁREA ###\n");
        printf("%s - %.2f\n", nome_cidade_1, area_1);
        printf("%s - %.2f\n", nome_cidade_2, area_2);
        if (area_1 > area_2) {
            printf("A carta %s ganhou!\n", nome_cidade_1);
        } else if (area_1 < area_2) {
            printf("A carta %s ganhou\n", nome_cidade_2);
        } else {
            printf("Empate!\n");
        }
        break;
    case 3:
        pib_1 /= 1000000000;
        pib_2 /= 1000000000;
        printf("### PIB ###\n");
        printf("%s - %.2f\n", nome_cidade_1, pib_1);
        printf("%s - %.2f\n", nome_cidade_2, pib_2);
        if (pib_1 > pib_2) {
            printf("A carta %s ganhou!\n", nome_cidade_1);
        } else if (pib_1 < pib_2) {
            printf("A carta %s ganhou\n", nome_cidade_2);
        } else {
            printf("Empate!\n");
        }
        break;
    case 4:
        printf("### PONTOS TURÍSTICOS ###\n");
        printf("%s - %d\n", nome_cidade_1, num_pontos_turisticos_1);
        printf("%s - %d\n", nome_cidade_2, num_pontos_turisticos_2);
        if (num_pontos_turisticos_1 > num_pontos_turisticos_2) {
            printf("A carta %s ganhou!\n", nome_cidade_1);
        } else if (num_pontos_turisticos_1 < num_pontos_turisticos_2) {
            printf("A carta %s ganhou\n", nome_cidade_2);
        } else {
            printf("Empate!\n");
        }
        break;
    case 5:
        printf("### DENSIDADE DEMOGRÁFICA ###\n");
        printf("%s - %.2f\n", nome_cidade_1, dens_pop_1);
        printf("%s - %.2f\n", nome_cidade_2, dens_pop_2);
        if (dens_pop_1 < dens_pop_2) {
            printf("A carta %s ganhou!\n", nome_cidade_1);
        } else if (dens_pop_1 > dens_pop_2) {
            printf("A carta %s ganhou\n", nome_cidade_2);
        } else {
            printf("Empate!\n");
        }
        break;
    case 6:
        printf("### PIB PER CAPITA ###\n");
        printf("%s - %.2f\n", nome_cidade_1, pib_per_capita_1);
        printf("%s - %.2f\n", nome_cidade_2, pib_per_capita_2);
        if (pib_per_capita_1 > pib_per_capita_2) {
            printf("A carta %s ganhou!\n", nome_cidade_1);
        } else if (pib_per_capita_1 < pib_per_capita_2) {
            printf("A carta %s ganhou\n", nome_cidade_2);
        } else {
            printf("Empate!\n");
        }
        break;
    case 7:
        printf("### SUPER PODER ###\n");
        printf("%s - %.2f\n", nome_cidade_1, super_poder_1);
        printf("%s - %.2f\n", nome_cidade_2, super_poder_2);
        if (super_poder_1> super_poder_2) {
            printf("A carta %s ganhou!\n", nome_cidade_1);
        } else if (super_poder_1 < super_poder_2) {
            printf("A carta %s ganhou\n", nome_cidade_2);
        } else {
            printf("Empate!\n");
        }
        break;
    default:
        printf("Opção inválida\n");
        break;
    }

    printf("Boa partida!\n");

    return 0;
}
