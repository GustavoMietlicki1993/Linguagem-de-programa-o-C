#include <stdio.h>
#include <stdlib.h>

/*
Uma certa empresa fez uma pesquisa de mercado para saber se as pessoas
gostaram ou não do seu último produto lançado. Para isto, coletou o sexo do entrevistado
e a sua resposta (sim ou não). Sabendo que foram entrevistadas 150 pessoas, fazer um
algoritmo que calcule e mostre ao final:
• O número de pessoas que responderam sim;
• O número de pessoas que responderam não;
• A percentagem de pessoas do sexo feminino que responderam sim;
• A percentagem de pessoas do sexo masculino que responderam não;
Para a resposta SIM/NÃO. Utilize uma variável do tipo CHAR, que armazena S ou N,
ou use uma variável do tipo INT que armazena 1 (para SIM) e 2 (para NÃO).
*/

int main(void){
    int hRespSim;                   //Homens que responderam SIM.
    int mRespSim;                   //Mulheres que responderam SIM.
    int pRhN;                       //Porcentagem de resposta do sexo masculino que responderam NAO.
    int pRmS;                       //Porcentagem de resposta do sexo masculino que responderam SIM.
    char nome[60];                      //Nome do Usuario.
    char sexo[1];                      //Sexo do Usuario.
    char respostaUsuario[3];           //Resposta do usuario.
    int pessoa, numeroDeSim, numeroDeNao;

    printf("Digite seu nome, \nseu sexo e sua resposta(SIM ou NAO) \nnos campos abaixo:\n");

    //Loop com o FOR que fara a contagem e limitará a quantidade de usuarios em 150.
    //Abaixo do FOR, na linha 44 inicia
    while(pessoa<150){
            pessoa++;

            printf("Seu nome:\n");
            scanf("%s", &nome);
            printf("----------------------------------------------\n");

            printf("Seu sexo(M para MASCULINO ou F para FEMININO):\n");
            scanf("%s", &sexo);
            printf("----------------------------------------------\n");

            printf("Sua resposta(SIM ou NAO):\n");
            scanf("%s", &respostaUsuario);
            printf("----------------------------------------------\n");

            printf(nome, sexo, respostaUsuario);

        if(respostaUsuario == "SIM" && sexo == "M"){
                numeroDeSim++;
                hRespSim++;
                break;
        }else if(respostaUsuario == "NAO" && sexo == "M"){
                numeroDeNao++;
                pRhN++;
                break;

        }else if(respostaUsuario == "SIM" && sexo== "F"){
                numeroDeSim++;
                mRespSim++;
                pRmS++;
                break;
        }else if(respostaUsuario == "NAO" && sexo== "F"){
                numeroDeNao++;
                break;

            }else{
            printf("Atencao usuario, houve um erro em sua resposta, ou nao existe resposta. \n");
            break;
        };
    };

    //Calculo para ter a porcentagem de pessoas do sexo feminino que responderam SIM:
    pRmS = pRmS * (150 / 100);

    //Calculo para ter a porcentagem de pessoas do sexo masculino que responderam NAO:
    pRhN = pRhN * (150 / 100);

    printf("O numero de pessoas que responderam SIM foi de:%d", numeroDeSim);

    printf("O numero de pessoas que responderam NAO foi de: %d", numeroDeNao);

    printf("A porcentagem de pessoas do sexo feminino que responderam SIM: %d\n", pRmS);

    printf("A porcentagem de pessoas do sexo masculino que responderam NAO: %d\n", pRhN);

    system("pause");
    return 0;
};

