#include <stdio.h>

int main() {
    int idade,matricula; //declaro as variáveis
    float altura;   // //
    char nome[50]; // //

    printf("digite sua idade : \n"); // imprimo o que o codigo ira dizer
    scanf("%d" , &idade); // insiro o valor que vai ser armazenado na variavel


    printf("Digite sua altura: \n"); // samething
    scanf("%f" , &altura); // samething 

    printf("Digite seu nome : \n"); // samething
    scanf("%s" , &nome); // so imprime o primeiro nome, vou utlizar do fgets para ler nomes compostos
    // fgets(nome, 50, stdin); | retorna meu nome completo, e se misturar fgets com scanf da pau no bixo

    printf("Digite sua matricula : \n"); //samething
    scanf("%d" , &matricula); //samething


    printf("Nome do aluno : %s - Matricula : %d \n", nome, matricula); // imprimo os valores
    printf("Idade %d - Altura %f \n", idade , altura); //samething


    return 0;
}