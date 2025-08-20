#include <stdio.h>

int main() {

    char estado[50];
    char codigo[5];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos;

    char estado2[50];
    char codigo2[5];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;



    printf("Digite o primeiro estado : \n");
    scanf("%s", &estado);

    printf("Digite o segundo estado : \n");
    scanf("%s", &estado2);


    printf("Digite o primeiro código : \n");
    scanf("%s", &codigo);

    printf("Digite o segundo código : \n");
    scanf("%s", &codigo2);


    printf("Digite o nome da primeira cidade : \n");
    scanf("%s", &cidade);

    printf("Digite o nome da segunda cidade : \n");
    scanf("%s", &cidade2);


    printf("Digite a população da primeira cidade : \n");
    scanf("%i",  &populacao);

    printf("Digite a população da segunda cidade : \n");
    scanf("%i",  &populacao2);


    printf("Digite a primeira area em km : \n");
    scanf("%f", &area);

    printf("Digite a segunda area em km : \n");
    scanf("%f", &area2);


    printf("Digite o primeiro pib dessa cidade : \n");
    scanf("%f", &pib);

    printf("Digite o segundo pib dessa cidade : \n");
    scanf("%f", &pib2);


    printf("Digite a quantidade de pontos turísticos da primeira cidade : \n");
    scanf("%i", &pontos);

    printf("Digite a quantidade de pontos turísticos da segunda cidade :  \n");
    scanf("%i", &pontos2);




    printf("\n CARTA 1\n ESTADO : %s\n CÓDIGO : %s\n NOME : %s\n POPULAÇÃO : %i\n ÁREA : %f km²\n PIB : %f bilhões de reais\n PONTOS TURÍSTICOS : %i \n", estado, codigo, cidade, populacao, area, pib, pontos);
    printf("\n CARTA 2\n ESTADO : %s\n CÓDIGO : %s\n NOME : %s\n POPULAÇÃO : %i\n ÁREA : %f km² \n PIB : %f bilhões de reais\n PONTOS TURÍSTICOS : %i \n", estado2, codigo2, cidade2, populacao2, area2, pib2, pontos2);
    
    
    return 0;


}