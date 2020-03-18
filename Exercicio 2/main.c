#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Para cada um dos consumidores de energia elétrica de uma cidade é informado o
número da conta e o total de KW consumido no mês. Sabendo-se que o custo do KW é de
R$ 1,75, fazer um algoritmo para:
 Armazenar e listar o número da conta, o total de KW consumidos e o valor a
pagar de cada consumidor cadastrado;
 Listar o número da conta, o total de KW consumidos e o valor a pagar do
consumidor que mais gastou e o que menos gastou;
 Mostrar a média de consumo da cidade;
 Mostrar o número de consumidores que ultrapassaram o consumo de 170
KW;
Armazene as informações em estruturas de vetores e/ou matrizes. Na tela, deve
existir um MENU que pergunta ao usuário se ele deseja cadastrar um novo consumidor ou
listar alguma informação (maior, menor, média, etc.).
*/

int main()
{
    int numDaConta, consumMaiorDe170;
    char OpcaoMenu1[1];
    float KW = 1.75, totalKw, valorMaiorKw, valorMenorKw, mediaConsCidade;

    printf("Senhor(a) usuario(a), segue abaixo algumas \n opcoes para uso do sistema. Digite abaixo \n o numero representado pela opcao desejada: \n 1 - Cadastrar um novo consumidor. \n 2 - Realizar consultas. \n");

    scanf(" %s", &OpcaoMenu1);
    printf("Imprima o resultado: %s", OpcaoMenu1);

    if((strcmp(OpcaoMenu1,"1")==0)){
        printf("\n Voce escolheu a opcao ""cadastrar novo usuario"". \n");


        }else if((strcmp(OpcaoMenu1,"2")==0)){
            printf("\n Voce escolheu a opcao ""Realizar consultas"". \n");
        }else{
            printf("\n Opcao invalida. \n ");
        };

    return 0;
}
