#include <stdio.h>


//SAIDA E ENTRADAS DE DADOS COM PRINTF E SCANF


int main() {
    int idade = 18; //variavel de um numero inteiro, %i ou %d
    char nome[7] ="gabriel"; // char serve para armazenar letras ou strings(palavras) as quais voce vai atribuir um array com o valor de caracteresa que a string ira posssuir %s
    float altura = 1.75; //o float serve para um ponto flutuante no codigo, trabalha com casas decimais como por exemplo o peso de alguem %f ou %e para um numero de notação cientifica
    double peso = 80.3; // o double também é um ponto flutuante, porem serve para armazenar valorees de maior espaço. %f

    printf("O nome do programador é %s, e a idade dele é %i\n", nome, idade); // aqui eu uso os especificadores de formato para o codigo entender  que eu quero que ele busque no codigo, e logo em seguida declaro qual variavel ele vai puxar
    printf("o %.7s pesa em torno de %.2f e tem uma altura de %.2f\n", nome, peso, altura); //same thing  
//e o \n é pula linha / quebra pagina pos html qnem eu
}